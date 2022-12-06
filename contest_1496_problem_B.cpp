
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

#define LLONG_MAX 9223372036854775807

#define vcc(x) vector<x>
#define qq(x) queue<x>

#define left st, (st + en) / 2, nd + nd
#define right (st + en) / 2 + 1, en, nd + nd + 1

#define ff(i, e)  for(int i = 0; i < e; i++)
#define ffl(i, e)  for(li i = 0; i < e; i++)
#define bf(i, s) for (i = s; i >= 0; i--)
#define ff2(j, s, e) for (int j = s; j < e; j++)
#define bf2(j, s, e) for (int j = s - 1; j >= e; j--)

MN{
    test(){
        int n;
        li k;
        inp1(n,k);
        int arr[n],flag=0;
        li ma=-1,mex,r;
        ff(i,n){
            inp(arr[i]);
            if(arr[i]>ma)
                ma = arr[i];
        }
        if(k==0){
            outln(n)
        }
        else{
            sort(arr,arr + n);
            ff(i,n){
                if(arr[i]>i){
                    mex = i;
                    break;
                }
                else if(i == n-1)
                    mex = n+1;
            }

            if(mex>ma){
                outln(n+k)
                continue;
            }

            r = (ma+mex+1)/2;
            ff(i,n){
                if( r == arr[i])
                    flag = 1;
            }
            if(flag)
            {
                outln(n)
                continue;
            }
            else
            {
                outln(n+1)
                continue;
            }

        }
    }
}



