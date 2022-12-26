#include<iostream>
using namespace std;
int main(){
    long long x;
    cin>>x;
    int steps=0;
    int temp=0;
    temp=x/5;
    steps+=temp;
    x=x%5;
    temp=x/4;
    steps+=temp;
    x=x%4;
    temp=x/3;
    steps+=temp;
    x=x%3;
    temp=x/2;
    steps+=temp;
    x=x%2;
    temp=x;
    steps+=temp;
    cout<<steps;

    return 0; 
}