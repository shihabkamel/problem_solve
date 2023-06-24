#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],total=0,max_index,min_index;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int mini=*min_element(arr,arr+n);
    int maxi=*max_element(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        if(arr[i]==maxi)
        {
            max_index=i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]==mini)
        {
            min_index=i;
            break;
        }
    }
    total=max_index+(n-min_index-1)-(min_index<max_index ? 1:0);
    // cout<<mini<<" "<<maxi<<endl;
    cout<<total;
    return 0;
}
