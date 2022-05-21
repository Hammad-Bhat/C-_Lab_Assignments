#include<iostream>
using namespace std;

struct Employee{
	
	int empnum;
	float empcom;
};

int main()
{
	Employee e1,e2,e3;
	cout<<" Enter the emloyee number and compensation "<<endl;
	cin>>e1.empnum>>e1.empcom;
	
	cout<<" Enter the emloyee number and compensation "<<endl;
	cin>>e2.empnum>>e2.empcom;
	
	cout<<" Enter the emloyee number and compensation "<<endl;
	cin>>e3.empnum>>e3.empcom;
	
	cout<<" Employee 1 : Employee number and compensation "<<e1.empnum<<e1.empcom<<endl;
	
	cout<<" Employee 2 : Employee number and compensation "<<e2.empnum<<e2.empcom<<endl;
	
	cout<<" Employee 3 : Employee number and compensation "<<e3.empnum<<" "<<e3.empcom<<endl;	
	
	return 0;
}
