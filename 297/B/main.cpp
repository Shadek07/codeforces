
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
#include<ctime>

using namespace std;

#define max(x,y) ((x)>(y)?(x):(y))
#define min(x,y) ((x)<(y)?(x):(y))

#define MX 1000000

#define forl(i,a,b) for ( i = a; i < b; i++)
#define fore(i,a,b) for ( i = a; i <= b; i++)
#define forrev(i,a,b) for ( i = a; i >= b; i--)
#define pb push_back
typedef long long  LL;
#define in(a,b,c) ((a) <= (b) && (b) <= (c))
#define ms(a,b) memset((a),(b),sizeof(a))

#define all(v) (v).begin(),(v).end()
#define pb push_back
#define ull unsigned long long int
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

string to_string(long long x) { stringstream ss; ss << x; return ss.str(); }
long long to_int(const string &s) { stringstream ss; ss << s; long long x; ss >> x; return x; }

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    char in[200005];
    int n,m;
    int vis[100002];
    int i,j,a;
    while(gets(in+1))
    {
        cin >> m;
        n = strlen(in+1);
        int n1 = n/2;
        if(n%2 == 1)
            n1++;
        ms(vis,0);
        
        for(j=0;j<m;j++)
        {
            cin >> a;
            
            forl(i,a,n1+1)
            {
                vis[i] ^= 1;
            }
        }
        getchar();
        
        forl(i,1,n1+1)
        {
            if(vis[i] == 1)
            {
                int a,b;
                a = i;
                b = n-i+1;
                //cout << a << " " << b << endl;
                swap(in[a],in[b]);
            }
        }
        
        cout << in+1 << endl;
    }
    return 0;
}
