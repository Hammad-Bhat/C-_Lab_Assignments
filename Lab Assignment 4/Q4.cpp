#include<iostream>
using namespace std;

class circle{
	private :
		float radius;
		float area;
	public :
	 	void getinput()
	 	{
	 		cout<<" Enter the radius "<<endl;
	 		cin>>radius;
		}
		void Areacrc()
		{
			area = 3.14 * radius * radius;
			
		}
		void printarea()
		{
			cout<<" The area of circle is "<<area;
		}
};

int main()
{
	circle c1;
	c1.getinput();
	c1.Areacrc();
	c1.printarea();
	
	return 0;
}
