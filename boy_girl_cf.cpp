#include<iostream>
#include<string>
using namespace std;
 void detectgirl(string name){
    int count[256] = {0};
    string unique = "";
    for (int i = 0; i < name.length(); i++) {
        if (count[name[i]] == 0) {
            unique += name[i];
            count[name[i]]++;
        }
    }
    int charac=unique.length();
    if(charac%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}
int main(){
      string name;
      cin>>name;
      detectgirl(name);

}
