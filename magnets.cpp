#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100000];
    int group=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            group++;
        }
    }
    cout<<group+1;
    return 0;
}