#include<bits/stdc++.h>
using namespace std;
int main(){
string str1,str2;
int total=0;
cin>>str1>>str2;
for(int i=0;i<str1.length();i++){
    if(str1[i]==str2[str2.length()-1-i]){
        total+=1;
    }
}

if(total==str1.length()){
    cout<<"YES";
}
else{
    cout<<"NO";
}

}
