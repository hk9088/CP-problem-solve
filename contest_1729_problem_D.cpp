#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void solve(){
    int n;
    cin>>n;

    long long int value[n], money[n], result[n];
    for(int i=0;i<n;i++)    cin>>value[i];
    for(int i=0;i<n;i++)    cin>>money[i];
    
    for(int i=0;i<n;i++){
        result[i] = money[i] - value[i];
    }

    sort(result, result + n);

    int l = 0, r = n-1, count = 0;

    while (1)
    {
        if(l >= r){
            break;
        }
        long long int z = result[l] + result[r];
        if(z>=0){
            r--;
            l++;
            count++;
        }
        else{
            l++;
        }
    }
    cout<<count<<endl;
    
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