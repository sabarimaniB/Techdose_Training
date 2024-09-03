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
    int total_xor = 0;
    n++;
    for(int i=1;i<=n;i++){
        total_xor ^=i;
    }
    int odd_xor = 0;
    for(int i=1;i<nums.size();i+=2){
        odd_xor = odd_xor ^ nums[i];
    }

    vector<int> ans(n,0);
    ans[0] = total_xor ^ odd_xor;
    for(int i=1;i<=nums.size();i++){
        ans[i] = ans[i-1] ^ nums[i-1];
    }
    for(auto i:ans){
        cout<<i<<" ";
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
