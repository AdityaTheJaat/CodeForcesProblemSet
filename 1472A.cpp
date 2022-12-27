//<<<<<<<<<<<<Author>>>>>>>>>>>>>
//<<<<<<<<<adityathejaat>>>>>>>>>

#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define inn int n; cin>>n;
#define test lli t ; cin>>t; while(t--)
#define li for(int i=0; count<=n ; i++)
#define lj for(int j=0; j<n; j++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        test{
            lli w, h, n;
            cin>>w>>h>>n;
            lli count=0;
            int i=0;
            while(i<=n){
                if(w%2==0 && h%2==0 && w!=0){
                    w=w/2;
                }
                if(w%2==0 && h%2==0 && h!=0){
                    h=h/2;
                }
                if(w%2==0 && h%2 !=0 && w!=0){
                    w=w/2;
                }
                if(h%2==0 && w%2 !=0 && h!=0){
                    h=h/2;
                }
                i++;
            }
            if(i+1>=n){
                cout<<"YES"<<endl;
                break;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        return 0;
}

//<<<<<<<<<<<<CodedBy>>>>>>>>>>>
//<<<<<<<<AdityaChaudhary>>>>>>>