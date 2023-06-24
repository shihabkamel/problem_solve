#include<bits/stdc++.h>
using namespace std;
int main()
{
//string lower="abcdefghijklmnopqrstuvwxyz";
    string str1,str2;
    cin>>str1>>str2;
    for(int i=0; i<str1.length(); i++)
    {
        if(isupper(str1[i]))
        {
            str1[i]=tolower(str1[i]);
        }
        if(isupper(str2[i]))
        {
            str2[i]=tolower(str2[i]);
        }
    }
    int sum1=0,sum2=0;
    for(int i=0; i<str1.length(); i++)
    {
        sum1+=str1[i]-'a';
        cout<<str1[i]-'a'<<" ";
        sum2+=str2[i]-'a';
        cout<<str2[i]-'a'<<" ";
        cout<<endl;
    }
    cout<<sum1<<" "<<sum2;
    if(sum1>sum2)
    {
        cout<<1<<endl;
    }
    else if(sum2>sum1)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<0;
    }

}
