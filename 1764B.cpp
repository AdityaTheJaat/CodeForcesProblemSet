//<<<<<<<<<<<<Author>>>>>>>>>>>>>
//<<<<<<<<<adityathejaat>>>>>>>>>

#include<bits/stdc++.h>
using namespace std;


#define lli long long int
#define ll long long
#define inn long long n; cin>>n;
#define test lli t ; cin>>t; while(t--)
#define li for(int i=0; i<n; i++)
#define lj for(int j=0; j<n; j++)


bool check(vector<int>arr, int key){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key) return 1;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        test{
            inn
            vector<int>arr;
            li{
                int x;
                cin>>x;
                arr.push_back(x);
            }
            ll count=n;
            ll e=n-1;
            while(e>0){
                ll x=arr[e--]-arr[0];
                if(check(arr,x) == 0){
                    count++;
                    arr.push_back(x);
                    sort(arr.begin(),arr.end());
                    e=n-1;
                }
            }
            cout<<count<<endl;
        }
        return 0;
}

//<<<<<<<<<<<<CodedBy>>>>>>>>>>>
//<<<<<<<<AdityaChaudhary>>>>>>>