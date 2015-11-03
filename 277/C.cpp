
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
    int n,p,i,j,k;
    char in[100001];
    char in1[100001];
    int step;
    while(cin >> n >> p)
    {
    	getchar();
    	gets(in);
    	step = 0;
    	if(n == 1)
    	{
    		cout << 0 << endl;
    		continue;
    	}
    	if(n == 2)
    	{
    		//cout << (in[0]-'a')+(in[1]-'a') << endl;
    		step = min((in[0]-'a')+(in[1]-'a')+1,('z' - in[0])+(in[1]-'a')+1);
    		cout << step << endl;
    		continue;
    	}
    	
    	int lastedit = p-1;
    	i = p-1;
    	int a,b;
    	a = 0;
    	b = 0;
    	int mn = 9999999;
    	strcpy(in1,in);
    	
    	int n1 = n-1;
    	forl(i,p-1,n1/2)
    	{
    		if(in1[i] != in1[n-1-i])
    		{
    			in1[i] = in1[n-1-i];
    			a += min((in1[i]-'a')+(in1[n-1-i]-'a')+1,('z' - in1[i])+(in1[n-1-i]-'a')+1);
    			a += abs(lastedit-i);
    			lastedit = i;
    		}
    	}
    	for(i=n1/2-1;i>=0;i--)
    	{
    		if(in1[i] != in1[n-1-i])
    		{
    			a += min((in1[i]-'a')+(in1[n-1-i]-'a')+1,('z' - in1[i])+(in1[n-1-i]-'a')+1);
    			a += abs(lastedit-i);
    			lastedit = i;
    		}
    	}
    	mn = min(mn,a);
    	
    	lastedit = p-1;
    	strcpy(in1, in);
    	for(i=p-1;i>=0;i--)
    	{
    		if(in1[i] != in1[n-1-i])
    		{
    			b += min((in1[i]-'a')+(in1[n-1-i]-'a')+1,('z' - in1[i])+(in1[n-1-i]-'a')+1);
    			b += abs(lastedit-i);
    			lastedit = i;
    		}
    	}
    	for(i=0;i<n;i++)
    	{
    		if(in1[i] != in1[n-1-i])
    		{
    			b += min((in1[i]-'a')+(in1[n-1-i]-'a')+1,('z' - in1[i])+(in1[n-1-i]-'a')+1);
    			b += abs(lastedit-i);
    			lastedit = i;
    		}
    	}
    	mn = min(mn,b);
    	cout << mn << endl;
    }
    return 0;
}
