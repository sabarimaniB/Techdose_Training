#include<bits/stdc++.h>
#include<math.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    int ans = 0;
    for(int i=0;i<32;i++){
        int cnt = 0;
        for(int j=0;j<n;j++){
            if((nums[j]&(1<<i))){
                cnt++;
            }
        }
        cnt = cnt%3;
        if(cnt) ans+=(1<<i);
    }
    cout<<ans<<endl;
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
