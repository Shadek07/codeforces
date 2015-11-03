
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

vector<int> fir,sec;

bool equal_check()
{
	int sz = fir.size();
	int i;
	forl(i,0,sz)
	if(fir[i] != sec[i])
	return false;
	
	return true;
}

bool greater_check()
{
	int sz = fir.size();
	if(sec.size() < sz)
	sz = sec.size();
	int i;
	forl(i,0,sz)
	if(fir[i] > sec[i])
	return true;
	else if(fir[i] < sec[i])
	return false;
	
	return false;
}

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int t;
    int i,j,k;
    int a;
    long long int a1,b1;
    while(cin >> t)
    {
    	a1 = b1 = 0;
    	forl(i,0,t)
    	{
    		cin >> a;
    		if(a<0)
    		{
    			sec.push_back(-a);
    			b1 += -a;
    		}
    		else
    		{
    			fir.pb(a);
    			a1 += a;
    		}
    	}
    	if(a1 != b1)
    	{
    		if(a1>b1) cout <<  "first" << endl;
    		else cout <<  "second" << endl;
    	}
    	else
    	{
    		string ans = "first";
    		j = fir.size();
    		k = sec.size();
    		if(j > k && equal_check())
    		{
    			cout << "first\n";
    			//continue;
    		}
    		else if(greater_check())
    		{
    			cout << "first\n";
    			//continue;
    		}
    		else
    		{
    			cout << "second\n";
    			//continue;
    		}
    	}
    	fir.clear();
    	sec.clear();
    }
    return 0;
}
