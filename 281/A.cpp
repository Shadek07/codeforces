
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

string team[2];
int home[2][100];
bool ok[2][100];
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int t,i,j,k;
    char in[25];
    int tm,num;
    char c1,c2;
    while(gets(in))
    {
    	team[0] = in;
    	gets(in);
    	team[1] = in;
    	cin >> t;
    	getchar();
    	memset(home, 0, sizeof(home));
    	memset(ok, false, sizeof(ok));
    	int ind;
    	forl(i,0,t)
    	{
    		cin >> tm >> c1 >> num >> c2;
    		getchar();
    		ind = (c1 == 'h')? 0 : 1;
    		if(c2 == 'r' && ok[ind][num] == false)
    		{
    			cout << team[ind] << " " << num << " " << tm << endl;
    			ok[ind][num] = true;
    		}
    		else
    		{
    			home[ind][num]++;
    			if(home[ind][num] == 2 && ok[ind][num] == false)
    			{
    				ok[ind][num] = true;
    				cout << team[ind] << " " << num << " " << tm << endl;
    			}
    		}
    	}
    	//cout << "here\n";
    }
    return 0;
}
