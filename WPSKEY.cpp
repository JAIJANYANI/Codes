#include<iostream>
unsigned int generate_default_pin(char *buf)
{
    char *mac;
    char mac_address[32] = { 0 };
    unsigned int oui, nic, pin;
 
    /* Get a pointer to the WAN MAC address */
    mac = lockAndGetInfo_log()->wan_mac_address;
 
    /*
     * Create a local, NULL-terminated copy of the WAN MAC (simplified from
     * the original code's sprintf/memmove loop).
     */
    sprintf(mac_address, "%c%c%c%c%c%c%c%c%c%c%c%c", mac[0],
                                                     mac[1],
                                                     mac[2],
                                                     mac[3],
                                                     mac[4],
                                                     mac[5],
                                                     mac[6],
                                                     mac[7],
                                                     mac[8],
                                                     mac[9],
                                                     mac[10],
                                                     mac[11]);
 
    /*
     * Convert the OUI and NIC portions of the MAC address to integer values.
     * OUI is unused, just need the NIC.
     */
    sscanf(mac_address, "%06X%06X", &oui, &nic);
 
    /* Do some XOR munging of the NIC. */
    pin = (nic ^ 0x55AA55);
    pin = pin ^ (((pin & 0x0F) << 4) +
                 ((pin & 0x0F) << 8) +
                 ((pin & 0x0F) << 12) +
                 ((pin & 0x0F) << 16) +
                 ((pin & 0x0F) << 20));
  
    /*
     * The largest possible remainder for any value divided by 10,000,000
     * is 9,999,999 (7 digits). The smallest possible remainder is, obviously, 0.
     */
     pin = pin % 10000000;
  
    /* The pin needs to be at least 7 digits long */
    if(pin < 1000000)
    {
        /*
         * The largest possible remainder for any value divided by 9 is
         * 8; hence this adds at most 9,000,000 to the pin value, and at
         * least 1,000,000. This guarantees that the pin will be 7 digits
         * long, and also means that it won't start with a 0.
         */
        pin += ((pin % 9) * 1000000) + 1000000;
    }
  
    /*
     * The final 8 digit pin is the 7 digit value just computed, plus a
     * checksum digit. Note that in the disassembly, the wps_pin_checksum
     * function is inlined (it's just the standard WPS checksum implementation).
     */
    pin = ((pin * 10) + wps_pin_checksum(pin));
 
    sprintf(buf, "%08d", pin);
    return pin;
