#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(){
    char c;     cin>>c;
    string s = "codeforces";

    for(int i=0;i<s.length();i++){
        if(c == s[i]){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
    return;
}


int main(){
    //freopen("F:/Study/cf/input.txt", "r", stdin);
    //freopen("F:/Study/cf/output.txt", "w", stdout);
     
    int t;      cin>>t;
    while(t--){
        solve();
    }
}