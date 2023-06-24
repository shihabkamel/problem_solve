#include<bits/stdc++.h>
using namespace std;
int main(){
string s,s2;
cin>>s>>s2;
string result="";
for(int i=0;i<s.length();i++){
    if((s[i]=='1' && s2[i]=='0') ||(s[i]=='0' && s2[i]=='1')){
        result+='1';
    }
    else{
        result+='0';
    }
}
cout<<result;
return 0;


}
