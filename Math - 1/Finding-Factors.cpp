#include<bits/stdc++.h>
#include<math.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i*i!=n){
                cout<<(n/i)<<" ";
            }
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
