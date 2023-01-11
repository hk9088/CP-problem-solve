#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <math.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    vector<pair<int,int>> ans;

    for(int i=0;i<n;i++){
        x = log2(arr[i]) + 1;
        x = 1<<x;
        
        if(x - arr[i] != 0){
            ans.push_back(make_pair(i+1,x-arr[i]));
        }
        
    }
    
    cout<<ans.size()<<"\n";
    for(auto i: ans){
        cout<<i.first<<" "<<i.second<<"\n";
    }
    
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