#include<iostream>
using namespace std;
int main()
{
	// We cannot use switch statement to solve ths problem because the switch expression must be of an integer or character type but we cant expect floating point numbers //
	float n;
	cout<<" Enter the richter scale reading."<<endl;
	cin>>n;
	
	if(n < 5.0)
		cout<<" Little or no damage "<<endl;
	else if(5.0 <= n < 5.5)
		cout<<" Some damage "<<endl;
	else if(5.5 <= n < 6.5)
		cout<<" Serious damage : Walls may crack or fall "<<endl;
	else if(5.6 <= n < 7.5)
		cout<<" Disaster : Houses and buildings may collapse "<<endl;
	else if(n > 7.5)
		cout<<" Catastrophe : Most buildings destroyed "<<endl;
	else
		cout<<" No damage "<<endl;
			
	return 0;
}
