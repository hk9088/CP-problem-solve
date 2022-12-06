#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void solve(){
    int n;    cin>>n;

    int arr[n];
    int m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    m = (arr[0]*2) - 1;
    int c = 0;
    for(int i=0;i<n;i++){
        c+= arr[i]/m;
        if(arr[i]%m==0)     c--;
    }
    cout<<c<<endl;
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