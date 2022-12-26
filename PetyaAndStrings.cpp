#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    cout<<endl;
    cin>>s2;
    int count=0;
    for(int i=0;i<s2.length();i++){
        if(s2[i]<92){
            s2[i]+=32;
        }
        if(s1[i]<92){
            s1[i]+=32;
        }
    }
    if(s1>s2){
        cout<<"1";
    }
    else if(s1==s2){
        cout<<"0";
    }
    else if(s1<s2){
        cout<<"-1";
    }

    return 0;
}