
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

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    vector<int> fir, sec;
    int n,m;
    int i,j;
    long long int a,b;
    while(cin >> n)
    {
    	forl(i,0,n)
    	{
    		cin >> a;
    		fir.pb(a);
    	}
    	cin >> m;
    	forl(i,0,m)
    	{
    		cin >> a;
    		sec.pb(a);
    	}
    	sort(all(fir));
    	int d = fir[0]-1;
    	a = b = 0;
    	forl(i,0,n)
    	{
    		a += fir[i]>d?3:2;
    	}
    	forl(i,0,m)
    	{
    		b += sec[i]>d?3:2;
    	}
    	cout << a << ":" << b << endl;
    	fir.clear();
    	sec.clear();
    	
    }
    
    return 0;
}
