#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(){
    int n;  cin>>n;
    string s;   cin>>s;

    int x = 0 ,y = 0, flag = 0;

    for(int i=0;i<n;i++){
        if(s[i] == 'U'){
            y++;
        }
        else if(s[i] == 'D'){
            y--;
        }
        else if(s[i] == 'L'){
            x--;
        }
        else{
            x++;
        }

        if(x == 1 && y == 1){
            flag = 1;
            break;
        }
    }

    if(flag){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}


int main(){
    //freopen("F:/Study/cf/input.txt", "r", stdin);
    //freopen("F:/Study/cf/output.txt", "w", stdout);
     
    int t;      cin>>t;
    while(t--){
        solve();
    }
}