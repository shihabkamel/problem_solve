#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;

    for(int i=0; i<str.length()-1; i++)
    {
        for(int j=i+1; j<str.length(); j++)
        {
            if(str[i]<str[j])
            {
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }

    }
    char maxi=str[0];
    for(int i=0;i<str.length();i++){
        if(str[i]==maxi){
            cout<<str[i];
        }
    }




    return 0;
}
