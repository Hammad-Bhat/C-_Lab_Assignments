#include<iostream>
using namespace std;

class Point{
	private :
		float x;
		float y;
	public :
		void getpoint()
		{
			cout<<" Enter the coordinates of x and y "<<endl;
			cin>>x>>y;
		}
		void displaypoint(){
			cout<<"The x coordinate is "<<x<<"\nThe y coordinate is "<<y<<endl;
		}
};

int main()
{
	Point p1;
	p1.getpoint();
	p1.displaypoint();
	
	return 0;
}
