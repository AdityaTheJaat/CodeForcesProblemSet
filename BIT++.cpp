#include<iostream>
using namespace std;
int main(){
    int X=0;
    int n;
    cin>>n;
    string op;
    for(int i=0;i<n;i++){
        cin>>op;
        if(op=="X++" || op=="++X"){
            X++;
        }
        else if(op=="--X" || op=="X--"){
            X--;
        }
    }
    cout<<X<<endl;
    return 0;
}