#include<iostream>
using namespace std;

class Number{
	private :
		int x;
		int y;
	public :
		Number(): x(0),y(0){};
		Number(int a, int b): x(a),y(b){};
		
		void getvalues(){
			cout<<" Enter the numbers"<<endl;
			cin>>x>>y;
		}
		
		void swap()
		{
			int temp = x;
			x = y;
			y = temp;
		}
		void display()
		{
			cout<<x<<" "<<y<<endl;
		}
};

int main()
{
	Number n1;
	n1.getvalues();
	n1.display();
	n1.swap();
	n1.display();
	
	return 0;
	
}
