

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

string to_string(long long x) 
{ 
	stringstream ss; ss << x; return ss.str();
}
long long to_int(const string &s) { stringstream ss; ss << s; long long x; ss >> x; return x; }


map< pii, bool > mp;

bool check(int a, int b)
{
	if(mp[make_pair(a,b)] && mp[make_pair(a,b+1)] && mp[make_pair(a+1,b)] && mp[make_pair(a+1,b+1)])
		return true;
	return false;
}

char in[100002];

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n,m,k;
    int i,j;
    int a,b;
    int len;
    while(gets(in))
	{
		//cout << in << endl;
		len = strlen(in);
		
		bool found = false;
		int ind = 0;
		int mx = 0;
		int l = in[len-1] - '0';
		
		for(i = 0; i<len-1;i++)
		{
			int d = (in[i] - '0');
			if(d%2 == 0 && l > d)
			{
				swap(in[i],in[len-1]);
				found = true;
				//cout << i << endl;
				break;
			}
		}
		
		if(!found)
		{
			//cout << "here\n";
			for(i = len-2; i>=0;i--)
			{
				int d = (in[i] - '0');
				if(d%2 == 0)
				{
					swap(in[i],in[len-1]);
					found = true;
					break;
				}
			}
		}
		
		in[len] = '\0';
		if(found)
			cout << in << endl;
		else
			cout << -1 << endl;
	}
    return 0;
}

