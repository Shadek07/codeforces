
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
    int i,j,k;
    set<int> st[10];
    
    st[0].insert(1);
    st[0].insert(0);
    st[0].insert(7);
    
    st[1].insert(1);
    
    st[2].insert(2);
    
    st[5].insert(5);
    st[6].insert(6);
    
    st[3].insert(1);
    st[3].insert(7);
    st[3].insert(3);
    
    st[4].insert(1);
    st[4].insert(4);
    
    st[7].insert(1);
    st[7].insert(7);
    
    forl(i,0,8)
    {
    	st[8].insert(i);
    }
    st[8].insert(9);
    st[8].insert(8);
     
    st[9].insert(1);
    st[9].insert(3);
    st[9].insert(4);
    st[9].insert(5);
    st[9].insert(7);
    st[9].insert(9);
    char in[3];
    int cnt=0;
    int len;
    while(gets(in))
    {
    	int a,b;
    	cnt=0;
    	len = strlen(in);
    	
    	a = in[0]-'0';
    	b = in[1]-'0';
    	forl(i,0,10)
    	{
    		forl(j,0,10)
    		{
    			if(st[i].find(a) != st[i].end() && st[j].find(b) != st[j].end())
    			   cnt++;
    			   if(i == 6 && j == 5)
    			   {
    			   	   cout << "--";
    			   	   if(st[i].find(a) != st[i].end() && st[j].find(b) != st[j].end())
    			       cout <<"#\n";
    			   }
    		}
    	}
    	
    	cout << cnt << endl;
    }
    return 0;
}
