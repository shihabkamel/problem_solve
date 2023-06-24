#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,total_a=0,total_b=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n;i++){
        if(str[i]=='A'){
            total_a+=1;
        }
        else{
            total_b+=1;
        }
    }
    if(total_a>total_b){
        cout<<"Anton";
    }
    else if(total_b>total_a){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }


}
