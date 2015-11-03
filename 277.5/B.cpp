
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
    
    vector<int> boy,girl;
    int n,m,i,j,k;
    while(cin >> n)
    {
    	forl(i,0,n)
    	{
    		cin >> k;
    		boy.pb(k);
    	}
    	
    	cin >> m;
    	
    	forl(i,0,m)
    	{
    		cin >> k;
    		girl.pb(k);
    	}
    	
    	sort(all(boy));
    	sort(all(girl));
    	int cnt=0;
    	j = 0;
    	
    	for(i = 0;i<n;i++)
    	{
    		k = boy[i];
    		
    		for(;j<m;j++)
    		{
    			if(girl[j] < k-1)
    			{
    				continue;
    			}
    			else if(abs(girl[j] - k) <= 1)
    			{
    				cnt++;
    				j++;
    				//cout << cnt << " " << j << endl;
    				break;
    			}
    			else
    			{
    				//cout << "else:" << i << " " << j << endl;
    				//j--;
    				break;
    			}
    		}
    	}
    	
    	cout << cnt << endl;
    	boy.clear();
    	girl.clear();
    }
    return 0;
}
