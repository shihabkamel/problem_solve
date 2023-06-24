#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1="I hate ",str2="that ",str3="I love ",str4="it";
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"I hate it"<<endl;
    }
    else
    {
        cout<<"I hate that";
    }
    for(int i=2; i<n; i++)
    {
        if(i%2==0)
        {
            cout<<"I love that ";
        }
        else
        {
            cout<<"I hate that ";
        }

    }
     if(n%2==0 && n>1)
        cout<<" I love it";
    else if(n>1)
        cout<<" I hate it";
    cout<<endl;
    return 0;

}
