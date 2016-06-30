
#pragma comment(linker,"/STACK:16777216")
#pragma  warning ( disable: 4786)
#include <bits/stdc++.h>
using namespace std;

#define max(x,y) ((x)>(y)?(x):(y))
#define min(x,y) ((x)<(y)?(x):(y))

#define forl(i,a,b) for ( i = a; i < b; i++)
#define fore(i,a,b) for ( i = a; i <= b; i++)
#define forrev(i,a,b) for ( i = a; i >= b; i--)
#define MID(a, b) (a + ((b - a) >> 1))
#define pb push_back
typedef long long  LL;
#define in(a,b,c) ((a) <= (b) && (b) <= (c))
#define ms(a,b) memset((a),(b),sizeof(a))

#define all(v) (v).begin(),(v).end()
#define pb push_back
#define ull unsigned long long int
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

string to_string(long long x) { stringstream ss; ss << x; return ss.str(); }
long long to_int(const string &s) { stringstream ss; ss << s; long long x; ss >> x; return x; }

#define MAX 100005
#define INF 9999999

int visited[100002];
vector<int> adj[100002];
int flag;
void bipartite_check(int i,int c)
{
	int j,k,len;
	visited[i] = c;
	len = adj[i].size();
	for(j = 0;j<len;j++)
	{
		if(!visited[adj[i][j]])
			bipartite_check(adj[i][j],-c);
		else if(visited[adj[i][j]] == c)
		{
			flag = 0;
			return;
		}
	}
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n,m,i,j,k;
    int a,b;
    while(cin >> n >> m){
        forl(i,0,m){
            cin >> a >> b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        
        flag = 1;
        memset(visited,0,sizeof(visited));
		for(i = 0;i <n;i++)
		{
			if(!visited[i])
				bipartite_check(i,1);
		}
		if(flag==0){
            cout << -1 << endl;
            forl(i,0,n+1){
                adj[i].clear();
            }
            continue;
		}
        int cnt = 0;
        forl(i,1,n+1){
            if(visited[i] == 1){
                cnt++;
            }
        }
        cout << cnt << endl;
        forl(i,1,n+1){
            if(visited[i] == 1){
                cout << " " << i;
            }
        }
        cout << endl;
        
        cnt = 0;
        forl(i,1,n+1){
            if(visited[i] == -1){
                cnt++;
            }
        }
        cout << cnt << endl;
        forl(i,1,n+1){
            if(visited[i] == -1){
                cout << " " << i;
            }
        }
        cout << endl;
        forl(i,0,n+1){
            adj[i].clear();
        }
    }
    return 0;
}
