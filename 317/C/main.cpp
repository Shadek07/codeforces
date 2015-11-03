
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

#define MAX 100005
map<int, int> mp1, mp2;
bool sell[MAX], buy[MAX];
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    long int a,b,c,L,a1,b1,c1,L1,t;
    long long int ans;
    while(cin >> a >> b >> c >> L)
    { 
        ans = 0;
        long int ab,bc,ca,ab1,bc1,ca1;
        ab = abs(a-b);
        bc = abs(b-c);
        ca = abs(c-a);
        ab1 = a+b;
        bc1 = b+c;
        ca1 = c+a;
        if(a < bc)
        {
            if(L > (bc-a))
            {
                a1 = a + bc;
                t = bc1 - bc - 1;
                ans += t;
            }
        }
        else
        {
            
        }
    }
    return 0;
}
