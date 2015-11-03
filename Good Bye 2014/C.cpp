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
#define MX 501

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

int w[501];
int n,m;
int ord[1001];

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int i,j,k;
    bool ch[301];
    stack<int> st;
    queue<int> pq;
    while(cin >> n >> m)
    {
    	forl(i,0,n)
    	cin >> w[i];
    	forl(i,0,m)
    	cin >> ord[i];
    	ms(ch,false);
    	vector<int> v;
    	forl(i,0,m)
    	{
    		if(ch[ord[i]]==false)
    		{
    			//st.push(ord[i]);
    			v.pb(ord[i]);
    			ch[ord[i]]= true;
    		}
    	}
    	int sz = v.size();
    	for(i = sz-1;i>=0;i--)
    	{
    		st.push(v[i]);
    	}
    	long int cost=0;
    	forl(i,0,m)
    	{
    		int a = ord[i];
    		while(st.top() != a)
    		{
    			pq.push(st.top());
    			
    			cost += w[st.top()];
    			st.pop();
    		}
    		
    		st.pop();
    		while(!pq.empty())
    		{
    			st.push(pq.front());
    			pq.pop();
    		}
    		st.push(a);
    		
    	}
    	
    	cout << cost << endl;
    }
    return 0;
}
