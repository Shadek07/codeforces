
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

string mn;
string mx;
int m,s;
bool fnd;
bool fn;
void doit_mn(int total, int ind)
{
	int i;
	if(fnd)
	   return;	   
	
	if(ind == m)
	{
		if(total == s)
		{
			fnd = true;
			return;
		}
		return;
	}
	
	forl(i,0,10)
	{
		if(fnd)
		break;
		if(i == 0)
		{
			if(ind != 0)
			{
				mn[ind] = char(i+'0');
				doit_mn(total+i, ind+1);
			}
			
		}
		else
		{
			mn[ind] = char(i+'0');
			doit_mn(total+i, ind+1);
		}
	}
	
	if(fnd)
		return;
}

void doit_mx(int total, int ind)
{
	int i;
	if(fn)
	   return;	   
	
	if(ind == m)
	{
		if(total == s)
		{
			fn = true;
			return;
		}
		return;
	}
	
	for(i=9;i>=0;i--)
	{
		if(fn)
		break;
		if(i == 0)
		{
			if(ind != 0)
			{
				mx[ind] = char(i+'0');
				doit_mx(total+i, ind+1);
			}
			
		}
		else
		{
			mx[ind] = char(i+'0');
			doit_mx(total+i, ind+1);
		}
	}
	
	if(fn)
		return;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    
    int i,j,k;
    
    while(cin >> m >> s)
    {
    	if(s == 0)
    	{
    		if(m == 1)
    		{
    			cout << 0 << " " << 0 << endl;
    		}
    		else
    		{
    			cout << -1 << " " << -1 << endl;
    		}   		
    		continue;
    	}
    	
    	if(s <= m)
    	{
    		cout << "1";
    		j = m-s;
    		forl(i,0,j)
    		cout << "0";
    		forl(i,0,s-1)
    		cout << "1";
    		cout << " ";
    		
    		int sum = 0;
    		forl(i,0,m)
    		{
    			for(j = 9;j>=0;j--)
    			{
    				if(sum+j <= s)
    				{
    					cout << j;
    					sum +=j;
    					break;
    				}
    			}
    		}
    		cout << endl; 
    		
    		continue; 		   		
    	}
    	
    	mn = "";
    	mx = "";
    	forl(i,0,102)
    	{
    		mn += '1';
    		mx += '1';
    	}
    	fnd = false;
    	fn = false;
    	doit_mn(0,0);
    	if(fnd)
    	doit_mx(0,0);
    	if(fnd && fn)
    	{
    		forl(i,0,m)
    		cout << mn[i];
    		cout << " ";
    		forl(i,0,m)
    		cout << mx[i];
    		cout << endl;
    	}
    	else
    	{
    		cout << -1 <<  " " << -1 << endl;
    	}
    }
    return 0;
}
