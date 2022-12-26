#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int sum=0;
    int count=0;
    for(int i=1;i<=n;i++){
        sum=sum+(i*5);
        if(sum+k<=240){
            count++;
        }
        if((sum+k)>=240){
            cout<<count;
            return 0;;
        }
    }
    cout<<count;
    return 0;
}