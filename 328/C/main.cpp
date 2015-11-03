
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

ull gcd(ull a, ull b)
{
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    ull t,w,b;
    ull up;
    ull down;
    ull mn;
    while(cin >> t >> w >> b){
        up = 0;
        mn = min(w,b);
        up = mn-1;
        up = min(up,t);
        ull lcm = 1;
        lcm = lcm * (w / gcd(lcm,w));
        lcm = lcm * (b / gcd(lcm,b));
        ull total = t/lcm;
        ull mod = t%lcm;
        total *= mn-1;
        total += mod+1;
        up += total;
        down = t;
        ull div = gcd(down,up);
        up /= div;
        down /= div;
        cout << up << "/" << down << endl;
    }
    return 0;
}
