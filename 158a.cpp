#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n],total=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int th=arr[k-1];
    for(int i=0;i<n;i++){

        if(th<=arr[i] && arr[i]>0){
            total+=1;
        }
    }

    cout<<total;
    return 0;
}
