
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

bool vis[1002];
struct point
{
	int x;
	int y;
}grid[1002];
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int px,py;
    int n,i,j,k;
    scanf("%d %d %d",&n,&px,&py);
    int a,b,c;
    forl(i,0,n)
    {
    	scanf("%d %d",&grid[i].x,&grid[i].y);
    }
    ms(vis,false);
    int cnt=0;
    forl(i,0,n)
    {
    	if(vis[i])
			continue;
		
		int y1,y2,x1,x2;
		x2 = grid[i].x;
		y2 = grid[i].y;
		x1 = px;
		y1 = py;
		a = y1-y2;
		b = x2-x1;
		c = x1*(y2-y1) + y1*(x1-x2);
		forl(j,0,n)
		{
			if(j == i)
				continue;
			if(!vis[j] && (grid[j].x*a + grid[j].y*b + c) == 0)
			{
				vis[j] = true;
			}
		}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
		vis[i] = true;
		cnt++;
    }
    cout << cnt << endl;
    return 0;
}

