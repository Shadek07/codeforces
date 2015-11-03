
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

bool vis[51][51];
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

void dfs(int a, int b, int px, int py)
{
	int k;
	int x,y;
	if(found)
		return;
	
	vis[a][b] = true;
	forl(k,0,4)
	{
		x = a + dx[k];
		y = b + dy[k];
		if(found)
			return;
		
		if(inside(x,y) && !(x == px && y == py))
		{
			int d = in[x][y] - 'A';
			if(d == c && vis[x][y])
			{
				found = true;
				return;
			}
			if(d == c)
			{
				dfs(x,y,a,b);
			}
		}
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
	}
    return 0;
}
