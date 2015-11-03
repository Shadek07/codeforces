
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
    char in[101][101];
    char ans[101][101];
    int n,m;
    int cnt;
    int i,j,k;
    while(cin >> n >> m)
    {
    	getchar();
    	memset(ans,'\0',sizeof(ans));
    	forl(i,0,n)
    	{
    		gets(in[i]);
    	}
    	cnt = 0;
    	int ind=0;
    	forl(i,0,m)
    	{
    		bool ch = false;
    		forl(j,1,n)
    		{
    			ans[j][ind] = in[j][i];
    			ans[j-1][ind] = in[j-1][i];
    			ans[j][ind+1] = '\0';
    			ans[j-1][ind+1] = '\0';
    			if(strcmp(ans[j],ans[j-1]) < 0)
    			{
    				ch = true;
    				break;
    			}
    		}
    		if(ch==false)
    		{
    			ind++;
    		}
    	}
    	
    	cout << m - ind << endl;
    }
    return 0;
}
