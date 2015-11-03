
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

int A[101][101];
int B[101][101];
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n,m;
    int i,k,j;
    int x,y;
    while(cin >> n >> m)
    {
    	forl(i,0,n)
    	{
    		forl(j,0,m)
    		{
    			A[i][j] = -1;
    		}
    	}
    	forl(i,0,n)
    	{
    		forl(j,0,m)
    		{
    			cin >> B[i][j];
    			
    			if(B[i][j] == 0)
    			{
    				forl(x,0,n)
    				{
    					A[x][j] = 0;   					
    				}
    				forl(x,0,m)
    				{
    					A[i][x] = 0;   					
    				}
    			}
    		}
    	}
    	
    	bool ok = true;
    	
    	
    	forl(i,0,n)
    	{
    		forl(j,0,m)
    		{
    			if(B[i][j] == 1)
    			{
    				bool ch = false;
    				forl(x,0,m)
    				{
    					if(A[i][x] == -1)
    					{
    						A[i][x] = 1;
    						ch = true;
    						goto nt;
    					}
    					else if(A[i][x] == 1)
    					{
    						ch = true;
    						goto nt;
    					}
    				}
    				forl(x,0,n)
    				{
    					if(A[x][j] == -1)
    					{
    						A[x][j] = 1;
    						ch = true;
    						goto nt;
    					}
    					else if(A[x][j] == 1)
    					{
    						ch = true;
    						goto nt;
    					}
    				}
    				
    				nt:
    				if(ch == false)
    				{
    					ok = false;
    					break;
    				}
    			}
    		}
    	}
    	if(ok)
    	{
    		cout << "YES\n";
    	forl(i,0,n)
    	{
    		forl(j,0,m)
    		{
    			if(A[i][j] == -1)
    			A[i][j] = 1;
    			if(j > 0)
    			cout << " " << A[i][j];
    			else
    			cout << A[i][j];
    		}
    		cout << endl;
    	}
    	}
    	else
    	cout << "NO\n";
    }
    return 0;
}
