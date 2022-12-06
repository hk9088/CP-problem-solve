#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void solve(){
    int n;
    cin>>n;

    long int arr[n], mx = -1 , nx = -1, mi, ni;

    for(int i=0;i<n;i++){
        cin>>arr[i];

        if(arr[i]>mx){
            mx = arr[i];
            mi = i;
        }
    }

    for(int i=0;i<n;i++){
        if(i == mi){
            continue;
        }
        if(arr[i]>nx){
            nx = arr[i];
            ni = i;
        }
    }

    for(int i=0;i<n;i++){
        if(i == mi){
            continue;
        }
        arr[i] -= mx;
    }

    
    arr[mi] -= nx;
    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";


    
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