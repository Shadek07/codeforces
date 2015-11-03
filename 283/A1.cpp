
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
    int arr[101];
    int n,i,j,k;
    int mn,diff;
    while(cin >> n)
    {
    	forl(i,0,n)
    	{
    		cin >> arr[i];
    	}
    	mn = 100000;
    	forl(j,1,n-1)
    	{
    		diff = 0;
    		k = 0;
    		forl(i,1,n)
    		{
    			if(i == j)
    			continue;
    			diff = max(diff, arr[i]-arr[k]);
    			k = i;
    		}
    		
    		mn = min(mn,diff);
    	}
    	
    	cout << mn << endl;
    	
    }
    return 0;
}
