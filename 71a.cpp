#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    for(int i=0; i<n; i++)
    {
        cin>>str;
        if(str.length()<=10){
            cout<<str<<endl;
        }
        else{
            cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
        }

    }
    return 0;
}
