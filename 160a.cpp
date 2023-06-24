#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],total=0,me=0,bro=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        bro+=a[i];
    }
    bro/=2;
    sort(a,a+n);
    for(int j=n-1;j>=0;j--){
        me+=a[j];
        total++;
        if(bro<me){
            break;
        }
    }
   cout<<total;


    return 0;
}
