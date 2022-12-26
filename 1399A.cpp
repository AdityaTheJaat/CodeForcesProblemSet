//<<<<<<<<<<<<Author>>>>>>>>>>>>>
//<<<<<<<<<adityathejaat>>>>>>>>>
 
#include<bits/stdc++.h>
using namespace std;
 
#define lli long long int
#define ll long long
#define test lli t ; cin>>t; while(t--)

bool checkeq(vector<int>v, int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=v[i];
    }
    if((v[0]*size)==sum){
        return 1;
    }
    return 0;
}

bool check(vector<int>v, int size){
    int count=0;
    for(int i=0; i<size; i++){
       if(v[i]!= -1) count++; 
    }
    if(count==1) return 1;
    else return 0;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        test{
            int n;
            cin>>n;
            vector<int>v;
            for(int i=0; i<n; i++){
                int x;
                cin>>x;
                v.push_back(x);
            }
            int z=check(v, n);
            if(z){
                cout<<"YES"<<endl;
            }
            else{
                for(int i=0; i<n; i++){
                    for(int j=i+1; j<n; j++){
                        int y=abs(v[j]-v[i]);
                        if(y<=1){
                            if(v[i]<v[j]){
                                v[i]=-1;
                            }
                            else{
                                v[j]=-1;
                            }
                        }
                    }
                }
                bool res=check(v, n);
                if(res) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
}
 
//<<<<<<<<<<<<CodedBy>>>>>>>>>>>
//<<<<<<<<AdityaChaudhary>>>>>>>