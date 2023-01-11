#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void solve(){
    string s;
    cin>>s;
    long long int n = s.length(), i;
    string a, b, c;

    if(s[0] == s[n-1]){
        a = s[0];
        c = s[n-1];
        b = "";

        for(i=1;i<n-1;i++){
            b += s[i]; 
        }    
    }
    else{
        if(s[0] == s[1]){
            a = s[0];
            b = s[1];
            c = "";

            for(i=2;i<n;i++){
                c += s[i]; 
            } 
        }
        else if(s[0] == 'a'){
            a = s[0];
            c = s[n-1];
            b = "";

            for(i=1;i<n-1;i++){
                b += s[i]; 
            }
        }
        else{
            a = s[0];
            b = s[1];
            c = "";

            for(i=2;i<n;i++){
                c += s[i]; 
            }
        }
    }
    
    cout<<a<<" "<<b<<" "<<c<<"\n";
}


int main(){
    //freopen("F:/Study/cf/input.txt", "r", stdin);
    //freopen("F:/Study/cf/output.txt", "w", stdout);
    
    int t;  cin>>t;
    while (t--)
    {
        solve();
    }
    
}