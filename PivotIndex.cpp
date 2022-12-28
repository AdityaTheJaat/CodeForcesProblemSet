//<<<<<<<<<<<<Author>>>>>>>>>>>>>
//<<<<<<<<<adityathejaat>>>>>>>>>

#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define inn int n; cin>>n;
#define test lli t ; cin>>t; while(t--)
#define li for(int i=0; i<n; i++)
#define lj for(int j=1; j<n-1; j++)

inline int sumbef(vector<int>v, int index){
    int sum=0;
    for(int i=0;i<index;i++){
        sum+=v[i];
    }
    return sum;
}
inline int sumaft(vector<int>v, int index){
    int sum=0;
    for(int i=v.size();i>index;i--){
        sum+=v[i];
    }
    return sum;
}

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
        if(v.size()){
            cout<<0<<endl;
            return 0;
        }
        lj{
            if(sumbef(v, j-1)==sumaft(v, j+1)){
                cout<<j<<endl;
                return 0;
            }
        }
        cout<<"NO Pivot Index!"<<endl;
        return 0;
}

//<<<<<<<<<<<<CodedBy>>>>>>>>>>>
//<<<<<<<<AdityaChaudhary>>>>>>>