#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(){
    int n;      cin>>n;
    int k;      cin>>k;
    string s;   cin>>s;

    int low[26], cap[26], pair[26], p = 0;

    for(int i=0;i<26;i++){
        low[i] = 0;
        cap[i] = 0;
        pair[i] = 0;
    }
    
    for(int i=0;i<n;i++){
        if((s[i] >= 65) && (s[i] <= 90)){
            cap[s[i] - 'A']++;
        }
        else{
            low[s[i] - 'a']++;
        }
    }

    int l, h;
    for(int i=0;i<26;i++){
        l = cap[i];
        h = low[i];

        if(l > h){
            low[i] -= h;
            cap[i] -= h;
            pair[i] = cap[i]/2;
            p += h;
        }
        else{
            low[i] -= l;
            cap[i] -= l;
            pair[i] = low[i]/2;
            p += l;
        }
    }

    for(int i=0;i<26;i++){
        if(k == 0){
            break;
        }

        if(k > pair[i]){
            p += pair[i];
            k -= pair[i];
        }
        else{
            p += k;
            k = 0;
        }

    }
    
    cout<<p<<"\n";
}


int main(){
    freopen("F:/Study/cf/input.txt", "r", stdin);
    freopen("F:/Study/cf/output.txt", "w", stdout);
     
    int t;      cin>>t;
    while(t--){
        solve();
    }
}