#include<iostream>
using namespace std;

void solve(){
    int n;      cin>>n;
    int arr[n];
    int pre[n];
    int post[n];
    int twos = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];

        if(arr[i] == 2){
            twos++;
        }
        pre[i] = twos;
    }  

    twos = 0;

    for(int i=n-1;i>=0;i--){
        if(arr[i] == 2){
            twos++;
        }
        post[i] = twos;
    }
    
    int k = -1;
    for(int i=0;i<n-1;i++){
        if(pre[i] == post[i+1]){
            k = i+1;
            break;
        }
    }

    cout<<k<<"\n";
}


int main(){
    //freopen("F:/Study/cf/input.txt", "r", stdin);
    //freopen("F:/Study/cf/output.txt", "w", stdout);
    
    int t;      cin>>t;
    while(t--){
        solve();
    }
}