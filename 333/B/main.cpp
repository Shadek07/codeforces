
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

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n;
    int i,cnt;
    int ans,a;
    int mn,mx;
    while(cin >> n){
         scanf("%d",&a);
         ans = 1;
         int up=0;
         int down=0;
         int prev = a;
         int cnt=1;
         forl(i,1,n){
             scanf("%d",&a);
             if(a > prev){
                down = 0;
                up++;
             }else if(a < prev){
                 up = 0;
                 down++;
             }
             if(up >= 2){
                ans = max(ans,cnt-1);
                up--;
                cnt = 1;
             }else if(down >= 2){
                 ans = max(ans,cnt-1);
                 down--;
                 cnt = 1;
             }
             prev = a;
             cnt++;
         }
         ans = max(ans,cnt);
         cout << ans << endl;
    }
    return 0;
}

