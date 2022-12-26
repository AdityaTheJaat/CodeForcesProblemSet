#include<iostream>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int arr[n];
    int width=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>h){
            width+=2;
        }
        else if(arr[i]<h){
            width+=1;
        }
        else{
            width+=1;
        }
    }
    cout<<width<<endl;
    return 0;
}