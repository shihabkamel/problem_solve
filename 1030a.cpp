#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],result=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
           result+=1;
        }
    }
    if(result>0){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }

}
