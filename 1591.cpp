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
            if(a>c)
            {
                maxi=a;
                result1=maxi-a;
                result2=maxi-b+1;
                result3=maxi-c+1;
            }
            else
            {
                maxi=c;
                result1=maxi-a+1;
                result2=maxi-b+1;
                result3=maxi-c;

            }
        }
        else if(b>a)
        {
            if(b>c)
            {
                maxi=b;
                result1=maxi-a+1;
                result2=maxi-b;
                result3=maxi-c+1;
            }
            else
            {
                maxi=c;
                result1=maxi-a+1;
                result2=maxi-b+1;
                result3=maxi-c;

            }
        }
        else
        {
            maxi=c;
            if(maxi==0){
                result1=1;result2=1;result3=1;
            }
            else{
            result1=maxi-a+1;
            result2=maxi-b+1;
            result3=maxi-c;}
        }

        cout<<result1<<" "<<result2<<" "<<result3<<endl;
    }


}
