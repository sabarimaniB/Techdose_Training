#include<bits/stdc++.h>
#include<math.h>
using namespace std;

// How many set bits are there Method 1

void setbits() {
    int c = 0;
    int n = 0;
    cin>>n;
    while(n){
        n = n&(n-1);
        c++;
    }
    cout<< "Total Set Bits : "<<c<<endl;
}

// How many set bits are there Method 2

void setbits_method2() {
    int c = 0;
    int n = 0;
    cin>>n;
    while(n){
        if(n&1){
            c++;
        }
        n = n>>1;
    }
    cout<< "Total Set Bits : "<<c<<endl;
}

// How many set bits are there ? Inbuild Method

void setbits_method3() {
    int c = 0;
    int n = 0;
    cin>>n;
    c = __builtin_popcount(n);
    cout<< "Total Set Bits : "<<c<<endl;
}

//Check if ith bit is set or not

void Check_ith_bit(){
    int n,i;
    cin>>n;
    cin>>i;
    if(n&(1<<i)){
        cout<<"Set"<<endl;
    }else{
        cout<<"Unset"<<endl;
    }
}

// Set the ith bit

void set_ith_bit(){
    int n,i;
    cin>>n;
    cout<<n<<endl;
    cout<<"After Set ith bit"<<endl;
    cin>>i;
    n = (n|(1<<i));
    cout<<n;
}

// Unset the ith bit

void Unset_ith_bit(){
    int n,i;
    cin>>n;
    cout<<n<<endl;
    cout<<"After UnSet ith bit"<<endl;
    cin>>i;
    n = (n&(~(1<<i)));
    cout<<n;

}

// swapping 2 numbers Method 1

void swap_method1(){
    int a,b;
    cin>>a>>b;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<a<<" "<<b<<endl;
}

// swapping 2 numbers Method 2 one line code

void swap_method2(){
    int a,b;
    cin>>a>>b;
    a = a^b^(b=a);
    cout<<a<<" "<<b<<endl;
}

// odd or even

void Odd_or_Even(){
    int n;
    cin>>n;
    if(n&1){
        cout<<"Odd"<<endl;
    }else{
        cout<<"Even"<<endl;
    }
}

// Upper_to_lower
void Upper_to_lower(){
    string s;
    cin>>s;
    int n;
    for(int i=0;i<s.size();i++){
        n = int(s[i]);
        s[i] = char(n|(1<<5));
    }
    cout<<s<<endl;
}

// Lower_to_upper

void Lower_to_upper(){
    string s;
    cin>>s;
    int n;
    for(int i=0;i<s.size();i++){
        n = int(s[i]);
        s[i] = char(n&(~(1<<5)));
    }
    cout<<s<<endl;
}

// Generate All possible Subsets

void Generate_All_possible_subsets(){
    string s;
    cin>>s;
    int n = 1<<s.size();
    vector<vector<char>> ans;
    for(int i=0;i<n;i++){
        vector<char> temp;
        for(int j=0;j<s.size();j++){
            if(i&(1<<j)){
                temp.push_back(s[j]);
            }
        }
        ans.push_back(temp);
    }
    for(auto i:ans){
        for(int j=0;j<i.size();j++){
            cout<<i[j]<<" ";
        }
        cout<<endl;
    }
}

// power of 2

void solve(){
    int n;
    cin>>n;
    if(!(n&(n-1))){
        cout<<"Power of Two";
    }else{
        cout<<"Not a Power of Two";
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
