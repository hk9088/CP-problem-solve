#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(){
    int n;      cin>>n;
    string s;   cin>>s;
    int arr[n], flag = 0; 

    for(int i=0;i<n;i++){
        if(s[i] == 'm' || s[i] == 'M'){
            arr[i] = 1;
        }
        else if(s[i] == 'e' || s[i] == 'E'){
            arr[i] = 2;
        }
        else if(s[i] == 'o' || s[i] == 'O'){
            arr[i] = 3;
        }
        else if(s[i] == 'w' || s[i] == 'W'){
            arr[i] = 4;
        }
        else{
            arr[i] = 0;
        }
    }
    
    int j = 1;

    if(arr[0] == 1){
        for(int i=0;i<n;i++){
            if(arr[i] == j){
                continue;
            }
            else{
                j++;
                if(arr[i] == j){
                    continue;
                }
                else{
                    flag = 1;
                    break;
                }
            }
        }

        if(j != 4){    
            flag = 1;
        }
    
    }
    else{
        flag = 1;
    }

    if(flag){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
    }


}


int main(){
    freopen("F:/Study/cf/input.txt", "r", stdin);
    freopen("F:/Study/cf/output.txt", "w", stdout);
     
    int t;      cin>>t;
    while(t--){
        solve();
    }
}