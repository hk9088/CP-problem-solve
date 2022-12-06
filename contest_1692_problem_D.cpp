#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <utility>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>

using namespace std;

#define MN int main()
#define li long long int
#define uli unsigned long long int
#define test() \
    int t;     \
    cin >> t;  \
    while (t--)
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define inp(x) cin >> x
#define inp1(x, y) cin >> x >> y
#define inp2(x, y, z) cin >> x >> y >> z
#define pno cout << "NO\n"
#define pys cout << "YES\n"
#define out(x) cout << x
#define outsp(x) cout << x << " "
#define outln(x) cout << x << "\n"
#define out2(x, y) cout << x << " " << y << "\n"
#define pcs cout << "Case " << tk << ": "
#define mx 100005
#define mx2 1000005
#define md 1000000007
#define spc ' '
#define nn "\n"

#define vcc(x) vector<x>
#define qq(x) queue<x>

#define left st, (st + en) / 2, nd + nd
#define right (st + en) / 2 + 1, en, nd + nd + 1

#define ff(i, e)  for(int i = 0; i < e; i++)
#define bf(i, s) for (i = s; i >= 0; i--)
#define ff2(j, s, e) for (int j = s; j < e; j++)
#define bf2(j, s, e) for (int j = s - 1; j >= e; j--)




MN{
    //freopen("F:/Study/cf/input.txt", "r", stdin);
    //freopen("F:/Study/cf/output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    test(){
        int x;
        string s;
        cin>>s>>x;

        string a,b;

        a = s.substr(0,2);
        b = s.substr(3,2);

        int h,m;

        h = stoi(a);
        m = stoi(b);

        int total_time = h*60 + m;
        map<int,bool> mp;

        while (!mp[total_time])
        {
            mp[total_time] = true;
            total_time += x;
            if(total_time>=1440){
                total_time -= 1440;
            }
        }
        map<int,bool>::iterator itr;

        int z=0;
        for(itr=mp.begin(); itr!=mp.end(); ++itr){
            int t1 = itr->first /60 ;
            int t2 = itr->first % 60;

            
            string temp1 = t1<10?"0" + to_string(t1):to_string(t1);
            string temp2 = t2<10?"0" + to_string(t2):to_string(t2);
            string temp = temp1 + temp2;
            
            string P = temp;
            
            reverse(P.begin(), P.end());
            if (temp == P){
                
                z++;
            }

        }

        outln(z);

        


    }
}


