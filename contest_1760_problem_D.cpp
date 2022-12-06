#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;

        if(i == 0 || x!= arr.back()){
            arr.push_back(x);
        }
    }

    int c = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if((i == 0 || arr[i-1] > arr[i]) && (i == arr.size()-1 || arr[i] < arr[i+1]))
        {
            c++;
        }
    }
    if(c == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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