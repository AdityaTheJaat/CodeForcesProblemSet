//<<<<<<<<<<<<Author>>>>>>>>>>>>>
//<<<<<<<<<adityathejaat>>>>>>>>>

#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define inn int n; cin>>n;
#define test lli t ; cin>>t; while(t--)
#define li for(int i=0; i<n; i++)
#define lj for(int j=0; j<n-1; j++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        inn
        vector<int>v;
        li{
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int sumb=0;
        lj{
            sumb+=v[j];
        }
        int maxi=INT_MIN;
        li{
            maxi=max(maxi,v[i]);
        }
        cout<<((n-1)*maxi) -sumb;
        return 0;
}


//<<<<<<<<<<<<CodedBy>>>>>>>>>>>
//<<<<<<<<AdityaChaudhary>>>>>>>