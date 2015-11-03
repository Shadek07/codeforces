
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

bool edge[101][101][101];

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n,m;
    int q;
    int i,j,k;
    int a,b,c;
    int col;
    while(cin >> n >> m)
	{
		ms(edge,false);
		
		forl(i,0,m)
		{
			cin >> a >> b >> c;
			a--;
			b--;
			c--;
			edge[a][b][c] = true;
		}
		
		forl(col,0,m)
		{
			forl(k,0,n)
			{
				forl(i,0,n)
				{
					forl(j,0,n)
					{
						edge[i][j][col] |= (edge[i][k][col] && edge[k][j][col]);
						edge[j][i][col]	= edge[i][j][col];					
					}
				}
			}
		}
		
		
		cin >> q;
		
		forl(k,0,q)
		{
			cin >> a >> b;
			a--;
			b--;
			int cnt=0;
			forl(i,0,m)
			{
				if(edge[a][b][i])
					cnt++;
			}
			
			cout << cnt << endl;
		}
	}
    return 0;
}
