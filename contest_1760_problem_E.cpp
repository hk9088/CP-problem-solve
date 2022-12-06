#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void solve(){
    int n;
    cin>>n;

    int arr[n], t1 = -1, t2 = -1;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int c1=0, c2=0, c3=0;
    
    for(int i=0;i<n;i++){
        if((arr[i] == 1)){
            for (int j = i; j < n; j++)
            {
                if(arr[j] == 0){
                    c1++;
                }
            }
        }
    }
    cout<<"C1 r "<<c1<<"\n";
    if(n%2 == 0){
        int t = -1;
        for(int i=0;i<n/2;i++){
            if(arr[i] == 0){
                t = i;
                break;
            }
        }

        for(int i=0;i<n;i++){
            if((arr[i] == 1)|| (i == t)){
                for (int j = i; j < n; j++)
                {
                    if(arr[j] == 0){
                        c2++;
                    }
                }
            }
        }
        cout<<"C2 r "<<c2<<"\n";
    }
    else{
        int t = -1;
        for(int i=n/2;i<n;i++){
            if(arr[i] == 1){
                t = i;
                break;
            }
        }

        for(int i=0;i<n;i++){
            if((arr[i] == 1)){
                for (int j = i; j < n; j++)
                {
                    if(arr[j] == 0 || (j == t)){
                        c3++;
                    }
                }
            }
        }
        cout<<"C3 r "<<c3<<"\n";
    }
    
}


int main(){
    freopen("F:/Study/cf/input.txt", "r", stdin);
    freopen("F:/Study/cf/output.txt", "w", stdout);
    
    int t;  cin>>t;
    while (t--)
    {
        solve();
    }
    
}