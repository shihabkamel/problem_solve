#include<bits/stdc++.h>
using namespace std;
string removeDuplicate(string s)
{
    string temp = "";
    temp += s.at(0);

    for (int i = 1; i < s.length(); i++)
    {
        if (!(temp.find(s.at(i)) < temp.length()))
            temp = temp + s.at(i);
    }

    return temp;

}
int main()
{
    string str1,str2,str3;

    cin>>str1>>str2>>str3;
    string combo=str1+str2;
    int result=true;
    int n=str3.length();
    // string new_str=removeDuplicate(str3);
    string new_combo=removeDuplicate(combo);
    /* if(new_str.length()==new_combo.length()){
         cout<<"YES";
     }
     else{
         cout<<"NO";
     }*/
    for(int i=0; i<new_combo.length(); i++)
    {
        //cout<<combo[i]<<":"<<count(combo.begin(),combo.end(),combo[i])<<endl;
        int temp=count(combo.begin(),combo.end(),new_combo[i]);
        int temp2=count(str3.begin(),str3.end(),new_combo[i]);
        if(temp==temp2){
            result=true;
        }
        else{
            result=false;
            break;
        }
    }
    if(result==true && combo.length()==str3.length()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
