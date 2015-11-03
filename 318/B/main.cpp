
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

#define MAX 4005

int deg[MAX];
vector<int> adj[MAX];
int n;
bool have_all(int c, int a,int b)
{
    bool a1 = false;
    bool b1 = false;
    int i;
    forl(i,0,adj[c].size())
    {
        if(adj[c][i] == a)
        {
            a1 = true;
        }
        else if(adj[c][i] == b)
            b1 = true;
    }
    return a1 && b1;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int m;
    int a,b,c;
    int i,j,k;
    while(cin >> n >> m)
    {
        ms(deg,0);
        forl(i,0,m)
        {
            cin >> a >> b;
            adj[a].pb(b);
            adj[b].pb(a);
            deg[a]++;
            deg[b]++;
        }
        int ans = 999999;
        forl(i,1,n+1)
        {
            a = i;
            forl(j,0,adj[i].size()){
                b = adj[i][j];
                forl(k,1,n+1)
                {
                    if(k != a && k != b)
                    {
                        if(have_all(k,a,b)){
                            ans = min(ans,deg[k]+deg[a]+deg[b]-6);
                        }
                    }
                }
            }
        }
        if(ans == 999999)
            cout << -1 << endl;
        else cout << ans << endl;
        forl(i,1,n+1) 
            adj[i].clear();
    }
    return 0;
}
