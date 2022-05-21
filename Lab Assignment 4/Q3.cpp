#include<iostream>
using namespace std;

class Cube{
	private :
		float side;
	public:
		void getvalues(){
			cout<<" Enter the value of side "<<endl;
			cin>>side;
		}
		float calculatevolume(){
			float volume = side * side * side;
			return volume;
		}
	
};
int main()
{
	Cube c1;
	c1.getvalues();
	cout<<" The volume of cube is "<<c1.calculatevolume()<<endl;
	
	return 0;
}
