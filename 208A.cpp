//<<<<<<<<<<<<Author>>>>>>>>>>>>>
//<<<<<<<<<adityathejaat>>>>>>>>>

#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define inn int n; cin>>n;
#define test lli t ; cin>>t; string arr[t ]while(t--)
#define li for(int i=0; i<str.length(); i++)
#define lj for(int j=0; j<n; j++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        string str;
        cin>>str;
        int flag=1;
        li{
            if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
                i+=2;
                if(!flag){ cout<<" ";
                    flag=1;
                }
                continue;
            }
            flag=0;
            cout<<str[i];
        }    
        return 0;
}

//<<<<<<<<<<<<CodedBy>>>>>>>>>>>
//<<<<<<<<AdityaChaudhary>>>>>>>