#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        for(int j=0;j<s.size()-2;j++){
        if(s[j]>s[j+2]){
            swap(s[j],s[j+2]);
        }
    }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    return 0;
}