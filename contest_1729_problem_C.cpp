#include<iostream>
#include<string>
#include<vector>

using namespace std;

void solve(){
    string s;   cin>>s;
    int l = s.size();
    int arr[26], arrnum[l];
    
    for(int i=0;i<26;i++)   {arr[i] = 0;}
 
    for(int i=0;i<l;i++){
        arr[s[i] - 'a']++;
        arrnum[i] = s[i] - 'a';
    }
 
    int count = 0, x, y;
    
    x = s[0] - 'a';
    y = s[l-1] - 'a';

    if(x > y){

        for(int i=y; i<=x; i++){
            if(arr[i]>0){
                count+= arr[i];
            }
        }

        cout<<abs(x-y)<<" "<<count<<endl;

        for(int j=x; j>=y; j--){
            for(int i=0;i<l;i++){
                if(arrnum[i] == j){
                    cout<<i+1;
                    cout<<" ";
                }
            }
        }
        
    }
    else{

        for(int i=x; i<=y; i++){
            if(arr[i]>0){
                count+= arr[i];
            }
        }

        cout<<abs(x-y)<<" "<<count<<endl;

        for(int j=x; j<=y; j++){
            for(int i=0;i<l;i++){
                if(arrnum[i] == j){
                    cout<<i+1;
                    cout<<" ";
                }
            }
        }
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