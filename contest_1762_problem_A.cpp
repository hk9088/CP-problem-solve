#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void solve(){
    int n;
    cin>>n;

    int arr[n];
    int sum = 0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }

    if(sum%2==0){
        cout<<"0"<<"\n";
    }
    else{
        int ans = 20;
        for(int i=0;i<n;i++){
            int j = arr[i];
            int moves = 0;
            while ((j%2)==(arr[i]%2))
            {
                j /= 2;
                moves++;
            }
            ans = min(ans,moves);
        }

        cout<<ans<<"\n";
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