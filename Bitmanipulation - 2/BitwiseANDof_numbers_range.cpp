#include<bits/stdc++.h>
#include<math.h>
using namespace std;


void solve(){
    int a,b;
    cin>>a>>b;
    int c = 0;
    while(a!=b){
        a>>=1;
        b>>=1;
        c++;
    }
    int ans = a<<c;
    cout<<ans;
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
