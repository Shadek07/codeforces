
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

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

string to_string(long long x) { stringstream ss; ss << x; return ss.str(); }
long long to_int(const string &s) { stringstream ss; ss << s; long long x; ss >> x; return x; }

bool vis[27];
int n,m;
int dx[] = {0,-1,0,1};
int dy[] = {1,0,-1,0};
char in[52][51];
bool inside(int a, int b)
{
	if(a>= 0 && a<n && b >= 0 && b < m)
		return true;
	return false;
}

bool found;
int c;
bool adj[27][27];
bool imp;
int indeg[27];

void dfs(int a)
{
	vis[a] = true;
	if(imp)
		return;
		
	int i;
	
	forl(i,0,26)
	{
		if(adj[a][i])
		{
			if(vis[i] == false)
			{
				dfs(i);
			}
			else
			{
				imp = true;
				return;
			}
		}
	}
}

void print(int a)
{
	vis[a] = true;
	int i;
	cout << char(a+'a');
	forl(i,0,26)
	{
		if(a != i && adj[a][i] == true && vis[i] == false)
			print(i);
	}
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int i,j,k;
    char in[101][102];
    while(cin >> n)
	{
		getchar();
		forl(i,0,n)
		{
			gets(in[i]);
		}
		ms(adj,false);
		ms(indeg,0);
		imp = false;
		forl(i,0,n-1)
		{
			//forl(j,i+1,n)
			//{
			    j = i+1;
				int len = min(strlen(in[i]), strlen(in[j]));
				forl(k,0,len)
				{
					if(in[i][k] == in[j][k])
						continue;
					else
					{
						if(adj[in[j][k]-'a'][in[i][k]-'a'] == true)
						{
							imp = true;
							k = len;
							j = n;
							i = n;
							break;
						}
						adj[in[i][k]-'a'][in[j][k]-'a'] = true;
						indeg[in[j][k]-'a']++;
						break;
					}
				}
			//}
		}
		
		
		if(imp)
		{
			cout << "Impossible\n";
			continue;
		}
		
		ms(vis,false);
		
		forl(i,0,26)
		{
			if(indeg[i] == 0 && vis[i] == false)
			{
				dfs(i);
				if(imp)
					break;
			}
		}
		
		//if(imp)
		//{
			//cout << "Impossible\n";
			//continue;
		//}
		
		ms(vis,false);
		queue<int> pq;
		forl(i,0,26)
		{
			if(indeg[i] == 0)
			{
				pq.push(i);
			}
		}
		
		while(!pq.empty())
		{
			int x = pq.front();
			pq.pop();
			vis[x] = true;
			cout << char(x+'a');
			forl(i,0,26)
			{
				if(adj[x][i] && vis[i] == false)
				{
					pq.push(i);
				}
			}
		}
		
		cout << endl;
	}
    return 0;
}
