
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

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    char in[20];
    int n;
    cin >> n;
    getchar();
    gets(in);
    int cnt[10];
    ms(cnt,0);
    int len = strlen(in);
    int i,j,k;
    forl(i,0,len)
    {
    	cnt[in[i] - '0']++;
    }
    if(cnt[8])
	{
		cnt[7] += cnt[8];
		cnt[2] += 3*cnt[8];
		cnt[8] = 0;
	}
	if(cnt[4])
	{
		cnt[3] += cnt[4];
		cnt[2] += 2*cnt[4];
		cnt[4] = 0;
	}
    if(cnt[6])
	{
		cnt[5] += cnt[6];
		cnt[3] += cnt[6];
		cnt[6] = 0;
	}
	
    
	
	for(i=9;i>=2;i--)
	{
		while(cnt[i])
		{
			cout << i;
			cnt[i]--;
		}
	}
	cout << endl;
    return 0;
}
