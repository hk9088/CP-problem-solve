#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;



void solve(){
    int n;      cin>>n;
    string s;   cin>>s;
    int mx = 0;
    vector<int> prefix(n,0);
    vector<int> suffix(n,0);
    set<char> se;

    for(int i=0;i<n;i++){
        se.insert(s[i]);
        prefix[i] = se.size();
    }
    se.clear();

    for(int i=n-1;i>=0;i--){
        se.insert(s[i]);
        suffix[i] = se.size();
    }
    
    for(int i=0;i<n-1;i++){
        mx = max(mx, prefix[i]+suffix[i+1]);
    }
    
    cout<<mx<<"\n";
    
}


int main(){
    //freopen("F:/Study/cf/input.txt", "r", stdin);
    //freopen("F:/Study/cf/output.txt", "w", stdout);
    
    int t;      cin>>t;
    while(t--){
        solve();
    }
}