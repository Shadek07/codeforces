
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

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n,m;
    int i,j,k;
    char in[52][52];
    while(cin >> n  >> m)
	{
		ms(in,'#');
		j = 0;
		for(i = 1;i<n;i+=2)
		{
			if(j)
			{
				for(k = 1; k<m;k++)
				{
					in[i][k] = '.';
				}
			}
			else
			{
				for(k = 0; k<m-1;k++)
				{
					in[i][k] = '.';
				}
			}
			
			j ^= 1;
			
		}
		forl(i,0,n)
		{
			in[i][m] = '\0';
		}
		forl(i,0,n)
		{
			cout << in[i] << endl;
		}
	}
	
    return 0;
}
