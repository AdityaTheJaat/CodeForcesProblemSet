#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cap=0;
    int small=0;
    for(int i=0;i<s.size();i++){
        if(s[i]<91 &&s[i]>64){
            cap++;
        }
        else if(s[i]<123 &&s[i]>96){
            small++;
        }
    }
    if(small>cap || small==cap){
            for(int j=0;j<s.size();j++){
                if(s[j]<91 && s[j]>64){
                    s[j]+=32;
                }
            }
        }
    else if(small<cap){
            for(int j=0;j<s.size();j++){
                if(s[j]<123 && s[j]>96){
                    s[j]-=32;
                }
            }
        }
    cout<<s;
    return 0;
}