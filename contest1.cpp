
#include<bits/stdc++.h>
#include<math.h>

using namespace std;
int main(){
int t;
string str;

string str_pi=to_string(M_PI*10);
cin>>t;
    for(int i=0; i<t; i++)
    {int total=0;
        cin>>str;
        for(int j=0; j<str_pi.length(); j++)
        { 
            if(str_pi[j]==str[j] && str_pi[0]==str[0])
            {
                total+=1;
            }
        }
        cout<<total<<endl;
        total=0;
    }

}
