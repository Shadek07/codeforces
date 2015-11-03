
#pragma comment(linker,"/STACK:16777216")
#pragma  warning ( disable: 4786)
#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<queue>
#include<sstream>
#include<stack>
#include<list>
#include <bitset>
#include<iomanip>
#include <fstream>
#include<ctime>

using namespace std;

#define max(x,y) ((x)>(y)?(x):(y))
#define min(x,y) ((x)<(y)?(x):(y))

#define MX 1000000

#define forl(i,a,b) for ( i = a; i < b; i++)
#define fore(i,a,b) for ( i = a; i <= b; i++)
#define forrev(i,a,b) for ( i = a; i >= b; i--)
#define pb push_back
typedef long long  LL;
#define in(a,b,c) ((a) <= (b) && (b) <= (c))
#define ms(a,b) memset((a),(b),sizeof(a))

#define all(v) (v).begin(),(v).end()
#define pb push_back
#define ull unsigned long long int
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

string to_string(long long x) { stringstream ss; ss << x; return ss.str(); }
long long to_int(const string &s) { stringstream ss; ss << s; long long x; ss >> x; return x; }

long int ans;

int rem[2055];

void doit(int start, int len)
{
    if(len == 2)
    {
        ans += max(rem[start],rem[start+1]);
        return;
    }
    int mn = rem[start];
    int i,j;
    for(i = start+1; i< start+len;i++)
    {
        mn = min(mn,rem[i]);
    }
    for(i=start;i<start+len;i++)
    {
        rem[i] -= mn;
    }
    ans += mn;
    int div = len/2;
    doit(start, div);
    doit(start + div, div);
}

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n;
    int i,j,k,a,b;
    int arr[2055];
    
    while(cin >> n)
    {
        a = 1<<n;
        b = (1<<(n+1)) - 1;
        for(i=2;i<=b;i++)
        {
            cin >> k;
            arr[i] = k;
        }
        int mx = 0;
        
        for(i=a;i<=b;i++)
        {
            int t = 0;
            j = i;
            while(j > 1)
            {
                t += arr[j];
                j /= 2;
            }
            mx = max(mx,t);
        }
        k = 1;
        for(i=a;i<=b;i++)
        {
            int t = 0;
            j = i;
            while(j > 1)
            {
                t += arr[j];
                j /= 2;
                
            }
            rem[k] = mx - t;
            k++;
        }
        ans = 0;
       // for(i = 1;i<= (1<<n);i++)
           // cout << " " << rem[i];
        //cout << endl;
        doit(1,1<<(n-1));
        doit(1 + (1<<(n-1)), 1<<(n-1));
        cout << ans << endl;
    }
    return 0;
}
