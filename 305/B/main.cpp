
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

#define MAX 505

int grid[MAX][MAX];
int m,n,q;
int get_max(int i)
{
    int cnt = (grid[i][0] == 1);
    int mx = cnt;
    int j;
    forl(j,1,m)
    {
        if((grid[i][j] == grid[i][j-1]) && grid[i][j]==1)
        {
            cnt++;
        }
        else if((grid[i][j] != grid[i][j-1]) && grid[i][j]==1)
        {
            cnt = 1;
        }
        else
        {
            mx = max(mx,cnt);
            cnt = 0;
        }
        
    }
    mx = max(cnt,mx);
    return mx;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int current_mx[MAX];
    
    int i,j,k;
    int a;
    
    while(cin >> m >> n >> q)
    {
        forl(i,0,m)
        {
            forl(j,0,n)
            {
                cin >> grid[i][j];
                
            }
        }
        forl(i,0,m)
        {
            int cnt = (grid[i][0] == 1);
            int mx = cnt;
            forl(j,1,n)
            {
                if((grid[i][j] == grid[i][j-1]) && grid[i][j]==1)
                {
                    cnt++;
                }
                else if((grid[i][j] != grid[i][j-1]) && grid[i][j]==1)
                {
                    cnt = 1;
                }
                else
                {
                    mx = max(mx,cnt);
                    cnt = 0;
                }
                
            }
            mx = max(cnt,mx);
            current_mx[i] = mx;
        }
        int a,b;
        forl(i,0,q)
        {
            
            cin >> a >> b;
            a--;
            b--;
            grid[a][b] = grid[a][b]^1;
            current_mx[a] = get_max(a);
            int mx1 = 0;
            forl(j,0,m)
            {
                mx1 = max(mx1,current_mx[j]);
            }
            cout << mx1 << endl;
        }
        
        
    }
    return 0;
}
