#include<iostream>
using namespace std;

class Number{
	private :
		int x;
		int y;
		int z;
	public :
		Number():x(0),y(0),z(0){};
		Number(int a,int b,int c) : x(a),y(b),z(c){};
		
		void getvalues(){
			cout<<" Enter three numbers"<<endl;
			cin>>x>>y>>z;
		}
		void largest(){
			if(x>y && x>z)
			{
				cout<<x<<" is greater "<<endl;
			}
			else if(y>x && y>z)
			{
				cout<<y<<" is greater "<<endl;
			}
			else
			{
				cout<<z<<" is greater "<<endl;
			}
		}
		
		void display(){
			cout<<x<<y<<z;
		}		
};

int main()
{
	Number N1;
	N1.getvalues();
	N1.largest();
	N1.display();
	
	return 0;
}
