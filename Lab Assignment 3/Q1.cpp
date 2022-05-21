#include<iostream>
using namespace std;

struct Phone{
	int arcode;
	int exchange;
	int number;

};

int main()
{
	Phone p1 = {212,767,8900};
	Phone p2;
	
	cout<<" Enter your area code, exchange, and number "<<endl;
	cin>>p2.arcode>>p2.exchange>>p2.number;
	
	cout<<" My number is "<<"("<<p1.arcode<<")"<<p1.exchange<<"-"<<p1.number<<endl;
	
	cout<<" Your number is "<<"("<<p2.arcode<<")"<<p2.exchange<<"-"<<p2.number<<endl; 
	
	return 0;
}
