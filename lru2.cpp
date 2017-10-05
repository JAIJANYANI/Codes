#include<iostream>
using namespace std;
int main()
{
	int pno,ref[20],faults=0,frames,i,a,b,c,loop;
	cout<<"Enter Number of Pages\t\t"<<endl;
	cin>>pno;
	//cout<<"10"<<endl;
	cout<<"Enter The Reference String\t\t"<<endl;
	for(i=0;i<pno;i++)
	cin>>ref[i];
	//cout<<"1 2 3 4 5 6 7 8 9 0"<<endl;
	cout<<"Enter The Number of Pages\t\t"<<endl;
	cin>>frames;
	//cout<<"3"<<endl;
	cout<<"\n\n\nOUTPUT\n\n";
	cout<<ref[0]<<endl<<ref[0]<<"\t"<<ref[1]<<endl;
	a=0;
	b=1;
	c=2;
	loop=pno-8;
	for(i=0;i<3;i++){

	cout<<ref[a]<<"\t"<<ref[b]<<"\t"<<ref[c]<<endl;
	a=a+3;
	if(ref[a]!=ref[b!=ref[c]])
	faults++;
	cout<<ref[a]<<"\t"<<ref[b]<<"\t"<<ref[c]<<endl;
	b=b+3;
	if(ref[a]!=ref[b!=ref[c]])
	faults++;
	cout<<ref[a]<<"\t"<<ref[b]<<"\t"<<ref[c]<<endl;
	c=c+3;
	if(ref[a]!=ref[b!=ref[c]])
	faults++;
	
}
	
	cout<<"\n\nNo of Page Faults are \t:--"<<faults;	
	return 0;
}
