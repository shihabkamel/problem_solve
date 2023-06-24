#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,total=0;
    cin>>n>>h;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<=h)
        {
            total+=1;
        }
        else
        {
            total+=2;
        }
    }
    cout<<total;

}
