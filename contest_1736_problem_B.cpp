#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int gcd(int a, int b){
    if(a == 0){ return b; }
    return gcd(b % a, a);
}
int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}
void solve(){
    int n;    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)    cin>>arr[i];
    vector<int> lcm_arr, gcd_arr;

    lcm_arr.push_back(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int z ;
        if(i == n-1){
            z = lcm(arr[i],arr[i]);
        }
        else{
            z = lcm(arr[i],arr[i+1]);
        }
        lcm_arr.push_back(z);
        
    }
    
    int v_size = lcm_arr.size();
    for (int i = 1; i < v_size; i++)
    {
        int z = gcd(lcm_arr[i-1],lcm_arr[i]);
        gcd_arr.push_back(z);
    }
    bool r = true;
    for(int i=0;i<n;i++){
        if(arr[i]!=gcd_arr[i]){
            r = false;
            break;
        }
    }
    if(r){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
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