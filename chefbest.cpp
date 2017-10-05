#include<iostream>
#include<conio.h>
using namespace std;
main()
{
int hold;
int array[1000],n;
cin>>n;
for(int i=0; i<n; i++) { cin>>array[i];
}
cout<<endl;
for(int i=0; i<n-1; i++)
{
for(int j=0; j<n-1-i; j++) 
{
if(array[j]<array[j+1])
{
hold=array[j];
array[j]=array[j+1];
array[j+1]=hold;
cout<<"a\t";
}
}
}
cout<<"Sorted Array is: "<<endl;
for(int i=0; i<n; i++)
{
cout<<array[i]<<endl;
}
getch();
}
