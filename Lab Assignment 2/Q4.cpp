#include<iostream>
using namespace std;
int main()
{
	float x,y;
	cout<<"Enter the values of x and y "<<endl;
	cin>>x>>y;
	
	if(x == 0 && y == 0)
	cout<<"At Origin"<<endl;
	else if(x > 0 && y > 0)
	cout<<"First Quadrant"<<endl;
	else if(x < 0 && y > 0)
	cout<<"Second Quadrant"<<endl;
	else if(x < 0 && y < 0)
	cout<<"Third Quadrant"<<endl;
	else if(x > 0 && y < 0)
	cout<<"Fourth Quadrant"<<endl;
	else if(x != 0 && y == 0)
	cout<<" On X axis"<<endl;
	else if(y != 0 && x == 0)
	cout<<" On Y axis"<<endl;
	
	return 0;	
}
