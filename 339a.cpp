#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
if(str.length()==1){
    cout<<str;
}
else{
        for(int j=0;j<str.length();j+=2){
    for(int i=0;i<str.size()-1;i=i+2){
        if(str[i+2]<str[i]){
            swap(str[i],str[i+2]);
        }
    }}
    cout<<str;
}
}
