#include <iostream>
using namespace std;

int main(){
    int N, largest,smallest, sum = 0;
    double average;
    cin>>N;
    
    int collection[N];
    
    for(int i = 0; i < N; i++)
        cin>>collection[i];

    largest = collection[0];
    smallest = collection[0];

    for(int i = 0 ; i < N; i++){
        sum += collection[i];

        if(smallest > collection[i])
            smallest = collection[i];

        if( largest < collection[i])
            largest = collection[i];
    }

    average = static_cast <double> (sum) / N;

	cout<<"smallest of array is : " <<smallest<<endl;
	cout<<"largest of array is : "<<largest<<endl;
	cout<<"average of array is : " <<average<<endl;
	
}
