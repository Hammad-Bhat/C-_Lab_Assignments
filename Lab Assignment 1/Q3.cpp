#include <iostream>
using namespace std;

int main(){
    int H;
    int hotdays, pleasantdays , colddays, sum;
    double avgtemp;
    hotdays = pleasantdays = colddays = sum = 0;
    cin>>H;

    int arr[H];

    for(int i = 0; i < H; i++)
        cin>>arr[i];

    for(int i = 0 ; i < H ; i++){
        sum += arr[i];
        if(arr[i] >= 85){
            cout<<arr[i]<<"  Hot Day "<<endl;
            hotdays++;
        }

        if(arr[i] >= 60 && arr[i] <= 84){
            cout<<arr[i]<<" Pleasant Day "<<endl;
            pleasantdays++;
        }

        if(arr[i] < 60){
            cout<<arr[i]<<" Cold Day "<<endl;
            colddays++;
        }
    }

    avgtemp = static_cast <double> (sum) / H;
    cout<<"Average Temperature : "<<avgtemp<<endl;
	cout<<"Total Number od Hot Days : "<<hotdays<<endl;
	cout<<"Total number of Pleasant days: "<<pleasantdays<<endl;
	cout<<"Total number of Cold days : " <<colddays<<endl;

}
