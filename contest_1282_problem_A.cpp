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
#define out(x) cout << x;
#define outsp(x) cout << x << " "
#define outln(x) cout << x << "\n";
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
    freopen("F:/Study/cf/input.txt", "r", stdin);
    freopen("F:/Study/cf/output.txt", "w", stdout);
    test(){
        li a,b,c,r;
        cin>>a>>b>>c>>r;

        li i,d,cw,ce,mi,ma,ut=0;
        if(a<b)
        {
            mi=a;
            ma=b;
        }
        else
        {
            mi=b;
            ma=a;
        }
        cw = c-r;
        ce = c+r;
        d = ma-mi;

        if(cw>mi && ce<ma){
            ut = cw-mi + ma-ce;
        }
        else if(cw<=mi && (ce<ma && ce>mi)){
            ut =  ma-ce;
        }
        else if((cw>mi && cw<ma) && ce>=ma){
            ut = cw-mi;
        }
        else if(cw<=mi && ce>=ma){
            ut = 0;
        }
        else if((cw<=mi && ce<=mi)||(cw>=ma && ce>=ma)){
            ut = d;
        }
        outln(ut)
    }
}


