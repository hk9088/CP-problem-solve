#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void solve(){
    int n;    cin>>n;
    string s;
    cin>>s;

    int dec[26], c = 0, v[26], v1[26];
    for(int i=0;i<26;i++){
        v[i] = -1;
        v1[i] = -1;
        dec[i] = -1;
    }

    for(int i=0;i<n;i++){

        int x = s[i] - 'a';
        
        if(v[x] == -1){
            c++;
            if(v1[x] == -1){
                for(int j=0;j<26;j++){
                    if(j == x)  continue;
                    if(v1[j] == -1){
                        v[x] = 1;
                        v1[j] = 1;
                        dec[x] = j;
                        break;
                    }
                }
            }
            else{
                for(int j=0;j<26;j++){
                    if(j == x)  continue;
                    if(v1[j] == -1){
                        if (v[j] == -1)
                        {
                            v[x] = 1;
                            v1[j] = 1;
                            dec[x] = j;
                            break;
                        }
                        
                        else{
                            
                            int k1 = j;
                            while(v[k1]== 1){
                                k1=dec[k1];
                            }

                            if(c == 26){
                                v[x] = 1;
                                v1[j] = 1;
                                dec[x] = j;
                                break;
                            }
                            else if (k1!=x)
                            {
                                v[x] = 1;
                                v1[j] = 1;
                                dec[x] = j;
                                break;
                            }
                        }
                            
                    }
                        
                    
                }
            }
            

        }


    }

    for(int i=0;i<n;i++){
        int x = s[i] - 'a';
        char t = dec[x] + 'a';
        cout<<t;
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