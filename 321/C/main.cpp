

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
vector<int> adj[MAX];
bool has[MAX];
int par[MAX];

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n,m;
    int i,j,k,a,b;
    queue<int> pq;
    bool vis[MAX];
    int cnt[MAX];
    while(cin >> n >> m)
    {
        forl(i,0,n)
        {
            scanf("%d",&a);
            has[i+1] = a;
        }
        ms(cnt,0);
        forl(i,0,n-1)
        {
            scanf("%d %d",&a,&b);
            adj[a].pb(b);
            adj[b].pb(a);
            cnt[a]++;
            cnt[b]++;
        }
        pq.push(1);
        ms(vis,false);
        vis[1] = true;
        par[1] = -1;
        while(!pq.empty())
        {
            a = pq.front();
            pq.pop();
            //vis[a] = true;
            int sz = adj[a].size();
            forl(i,0,sz)
            {
                b = adj[a][i];
                if(vis[b]==false){
                    vis[b] = true;
                    pq.push(b);
                    par[b] = a;
                }
            }
        }
        int ans = 0;
        forl(i,2,n+1){
            if(cnt[i] == 1)
            {
                a = i;
                b = 0;
                (has[a]==1)?b++:b=b;
                int prev = a;
                bool fnd = true;
                while(par[a] != -1)
                {
                    a = par[a];
                    if(has[a]){
                        if(has[prev] == 0)
                        {
                            b=1;
                        }
                        else{
                            b++;
                            if(b > m)
                            {
                                fnd = false;
                                break;
                            }
                        }
                    }
                    else
                    {
                        b = 0;
                    }
                    prev = a;
                }
                if(fnd)
                    ans++;
            }
            else if(cnt[i] == 0)
                ans++;
        }
        cout << ans << endl;
        forl(i,1,n+1)
        {
            adj[i].clear();
        }
    }
    return 0;
}
