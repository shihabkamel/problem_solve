#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],total=0,avg=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
      //  avg+=arr[i];
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]>arr[i-1]){
            total+=1;
        }
    }
    cout<<total;//<<" "<<avg/n;

}
