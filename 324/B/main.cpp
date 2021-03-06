
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
#define MOD 1000000007
long long int squeare(long int num){
    return ((num%MOD)*(num%MOD))%MOD;
}

long long square(long long n) 
{ 
	return ((n%MOD)*(n%MOD))%MOD; 
}

long long modPow(long long base,long long power) 
{
	if (power == 0)
		return 1;
	else if (power%2 == 0)
		return square((modPow(base,power/2))%MOD);
	else
		return base * (modPow(base,power-1))%MOD;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    long long int n;
    int t,a,b;
    //cout << (-1000%MOD) << endl;
    while(cin >> n){
        long long int ans = modPow(3,3*n);
        a = modPow(7,n);
        //cout << a << " " << ans << endl;
        ans = (ans-a)%MOD;
        if(ans < 0)
            ans += MOD;
        cout << ans << endl;
    }
    return 0;
}

