#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(){
    int n;      cin>>n;
    string s;   cin>>s;

    int p = 0, q = n-1;

    while (p<=q)
    {
        if(s[p] == s[q]){
            break;
        }
        else{
            n -= 2;
        }
        p++;
        q--;
    }

    cout<<n<<"\n";
    
    
}


int main(){
    //freopen("F:/Study/cf/input.txt", "r", stdin);
    //freopen("F:/Study/cf/output.txt", "w", stdout);
     
    int t;      cin>>t;
    while(t--){
        solve();
    }
}