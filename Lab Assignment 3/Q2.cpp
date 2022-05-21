#include<iostream>
using namespace std;

struct Point{
	int x;
	int y;
};

int main()
{
	Point p1;
	cout<<" Enter the coordinates of p1"<<endl;
	cin>>p1.x>>p1.y;
	Point p2;
	cout<<" Enter the coordinates of p2"<<endl;
	cin>>p2.x>>p2.y;
	Point p3;
	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;
	
	cout<<" Coordinates of p1+p1 are "<<p3.x<<","<<p3.y;
	
	return 0;
}
