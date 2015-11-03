
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

#define MAX 100005
vpii vp;
int n,d;
int comp(pii p1, pii p2)
{
    if(p1.first < p2.first)
        return 1;
    return 0;
}
long long int cum[MAX];

int doit(int st)
{
    int l = st;
    int r = n-1;
    int mid;
    int ind=st;
    while(l<=r)
    {
        mid = (l+r)/2;
        int diff = vp[mid].first - vp[st].first;
        if(diff < d)
        {
            ind = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    return ind;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    
    int i,j,k;
    int m,f;
    while(cin >> n >> d)
    {
        vp.clear();
        forl(i,0,n)
        {
            scanf("%d %d",&m,&f);
            vp.pb(make_pair(m,f));
        }
        sort(all(vp),comp);
        cum[0] = 0;
        forl(i,0,n)
        {
            cum[i+1] = cum[i] + vp[i].second;
        }
        long long int ans = 0;
        forl(i,0,n)
        {
            j = doit(i);
            ans = max(ans, cum[j+1] - cum[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
