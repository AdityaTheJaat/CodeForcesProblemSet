#include<iostream>
using namespace std;
int main(){

    int a,b,c,t,mini1,mini2,maxi2,maxi1;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        maxi1=max(a,b);
        if(maxi1==a){
            maxi2=max(a,c);
        }
        else if(maxi1==b){
            maxi2=max(b,c);
        }
        int mini1=min(a,b);
        if(mini1==a){
            mini2=min(a,c);
        }
        else if(mini1==b){
            mini2=min(b,c);
        }
        
        if(a>mini2 && a<maxi2){
            cout<<a;
            break;
        }
        else if(b>mini2 && b<maxi2){
            cout<<b;
            break;
        }
        else if(c>mini2 && c<maxi2){
            cout<<c;
            break;
            }
    /*contestB 
    
    }*/
    }
    return 0;
}