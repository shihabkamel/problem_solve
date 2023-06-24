#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c,result1=0,result2=0,result3=0;
    for(int i=0; i<n; i++)
    {
        int maxi=0;
        cin>>a>>b>>c;
        if(a>b)
        {
            maxi=a;
            result1=maxi-a;
            result2=maxi-b+1;
            result3=maxi-c+1;
            if(maxi<c)
            {
                maxi=c;
                result1=maxi-a+1;
                result2=maxi-b+1;
                result3=maxi-c;
            }
        }
        else
        {
            maxi=b;
            if(maxi==0)
            {
                result1=1;
                result2=1;
                result3=1;
            }
            else if(maxi<c)
            {
                maxi=c;
                result1=maxi-a+1;
                result2=maxi-b+1;
                result3=maxi-c;
            }
            else
            {
                result1=maxi-a+1;
                result2=maxi-b;
                result3=maxi-c+1;
            }
        }
    }
    cout<<result1<<" "<<result2<<" "<<result3<<endl;
}
