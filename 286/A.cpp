
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

bool check(string s)
{
	int sz = s.size();
	int i,j;
	i = 0;
	j = sz-1;
	while(i<j)
	{
		if(s[i] != s[j])
			return false;
		i++;
		j--;
	}
	
	return true;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    char in[15];
    int sz,i,j,k;
    string s,s1;
    while(gets(in))
	{
		sz = strlen(in);
		bool fnd = false;
		
		forl(i,-1,sz)
		{
			
			for(char c = 'a'; c <= 'z'; c++)
			{
				s = "";
				forl(j,0,i+1)
				s += in[j];
				s += c;
				forl(j,i+1,sz)
				s += in[j];
				if(check(s))
				{
					i = sz;
					fnd = true;
					break;
				}
			}
		}
		
		if(fnd)
			cout << s << endl;
		else
			cout << "NA" << endl;
	}
    return 0;
}

