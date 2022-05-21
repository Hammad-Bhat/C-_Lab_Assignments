#include<iostream>
using namespace std;

struct Distance{
	int feet;
	float inches;
};

struct Volume{
	Distance height;
	Distance width;
	Distance length;
};

int main()
{
	Volume v1;
	cout<<" Enter height in feet and inches "<<endl;
	cin>>v1.height.feet>>v1.height.inches;
	
	cout<<" Enter width in feet and inches "<<endl;
	cin>>v1.width.feet>>v1.width.inches;
	
	cout<<" Enter length in feet and inches "<<endl;
	cin>>v1.length.feet>>v1.length.inches;
	
	float height = v1.height.feet + (v1.height.inches/12);
	
	float width = v1.height.feet +(v1.height.inches/12);
	
	float length = v1.height.feet +(v1.height.inches/12);
	
	float volume = height * width * length;
	
	cout<<" The volume of room is "<<volume;
	
	return 0;
}
