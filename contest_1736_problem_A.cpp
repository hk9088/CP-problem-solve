#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void solve(){
    int n;    cin>>n;

    int a[n], b[n], ac = 0, bc = 0, c1 = 0, c2 =0, c3 = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ac += a[i];
    }    
    for(int i=0;i<n;i++){
        cin>>b[i];
        bc += b[i];
    }
    
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            c1++;
        }
    }
    c2 = 1 + abs(ac - bc);

    int z;
    c1 > c2 ? z = c2 : z = c1;

    cout<<z<<"\n";
    
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