#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]){
            count++;
        }
    }
    if((count+1)%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}