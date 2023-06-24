#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int lower_total=0,upper_total=0;

    for(int i=0; i<str.length(); i++)
    {
        if(isupper(str[i]))
        {
            upper_total+=1;
        }
        else if(islower(str[i]))
        {
            lower_total+=1;
        }
    }
    if(upper_total>lower_total)
    {
        for(int i=0; i<str.length(); i++)
        {
            if(islower(str[i]))
            {
                str[i]=toupper(str[i]);
            }
        }
    }
    else
    {
        for(int i=0; i<str.length(); i++)
        {
            if(isupper(str[i]))
            {
                str[i]=tolower(str[i]);
            }
        }
    }
    cout<<str;

}
