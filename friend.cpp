#include<iostream>
using namespace std;
class jai
{
	int age;
	char name[10];
	
	public :
		void getdata();
	     jai (void);
		friend  void abc (jai j1);
};
void jai :: � tdata()

{
cout<<"enter age and name"<<endl;
cin >>age>>name;
cout<<age<<endl<<name;	
}

void abc (jai j1) 
{
	j1.getdata();
	
}
jai :: jai()
{
	getdata();
	
}

int main()
{
jai jj;
abc(jj);


}
