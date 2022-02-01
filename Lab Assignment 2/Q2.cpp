#include<iostream>
using namespace std;

int main()
{
	float wt_lb,ht_in,BMI;
	
	cout<<" Enter the weight in pounds and height in inches "<<endl;
	cin>>wt_lb>>ht_in;
	
	BMI = 703 * (wt_lb / (ht_in * ht_in));
	cout<<BMI<<endl;
	
	if(BMI < 18.5 )
		cout<<" Underweight "<<endl;
	else if(BMI >= 18.5 && BMI <= 24.9)
		cout<<" Normal "<<endl;
	else if(BMI >= 25.0 && BMI <= 29.9)
		cout<<" Overweight "<<endl;
	else if(BMI >= 30.0 )
		cout<<" Obese "<<endl;
		
	return 0;
}
