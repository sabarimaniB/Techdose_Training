#include<bits/stdc++.h>
#include<math.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    bool isprime[n+1];
    for(int i=0;i<=n;i++){
        isprime[i] = true;
    }
    isprime[0] = false;
    isprime[1] = false;
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            for(int j=i*i;j<=n;j+=i){
                isprime[j] = false;
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(isprime[i]==1){
            cout<<i<<" ";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);      
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    solve();
}
