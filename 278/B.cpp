
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

bool check(int a,int b, int c, int d)
{
	double av = ((a+b+c+d)*1.0)/4;
	if((av - int(av)) != 0)
	return false;
	
	double mn = ((b+c)*1.0)/2;
	if((mn - int(mn)) != 0)
	return false;
	int rn = d-a;
	
	if(av == mn && mn == rn)
	    return true;
	return false;
}

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    vector<int> given;
    vector<int> ch;
    int n,i,j,k;
    int a,b,c,d;
    while(cin >> n)
    {
    	given.clear();
    	ch.clear();
    	forl(i,0,n)
    	{
    		cin >> a;
    		given.pb(a);
    	}
    	sort(all(given));
    	if(n == 0)
    	{
    		cout << "YES\n1\n1\n3\n3\n";   		
    		continue;
    	}
    	if(n==1)
    	{
    		cout << "YES\n";
    		//cout << given[0] << endl;
    		cout << given[0] << endl;
    		cout << 3*given[0] << endl;
    		cout << 3*given[0] << endl;
    		continue;
    	}
    	if(n == 4)
    	{
    		a = given[0];
    		b = given[1];
    		c = given[2];
    		d = given[3];
    		if(check(a,b,c,d))
    		{
    			cout << "YES\n";
    			//cout << a << endl;
				//cout << b << endl;
				//cout << c << endl;
				//cout << d << endl;
    		}
    		else
    		{
    			cout << "NO\n";
    		}
    		continue;
    	}
    	
    	bool fnd = false;
    	
    	if(n == 3)
    	{
    		
    		forl(i,1,2001)
    		{
    			ch = given;
    			ch.pb(i);
    			sort(all(ch));
    			a = ch[0];
				b = ch[1];
				c = ch[2];
				d = ch[3];
				if(check(a,b,c,d))
				{
					cout << "YES\n";
					cout << i << endl;
					//cout << b << endl;
					//cout << c << endl;
					//cout << d << endl;
					fnd = true;
					break;
				}
    		}
    		
    		if(fnd == false)
    		{
    			cout << "NO\n";
    		}
    		
    		continue;
    	}
    	
    	fnd = false;
    	forl(i,1,2001)
    	{
    		forl(j,1,2001)
    		{
    			ch = given;
    			ch.pb(i);
    			ch.pb(j);
    			sort(all(ch));
    			a = ch[0];
				b = ch[1];
				c = ch[2];
				d = ch[3];
				if(check(a,b,c,d))
				{
					cout << "YES\n";
					cout << i << endl;
					cout << j << endl;
					//cout << c << endl;
					//cout << d << endl;
					i = 5000;
					fnd = true;
					break;
				}
    		}
    	}
    	
    	if(fnd == false)
    	{
    		cout << "NO\n";
    	}
    }
    return 0;
}
