
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
#include<climits>
using namespace std;

#define max(x,y) ((x)>(y)?(x):(y))
#define min(x,y) ((x)<(y)?(x):(y))

#define forl(i,a,b) for ( i = a; i < b; i++)
#define fore(i,a,b) for ( i = a; i <= b; i++)
#define forrev(i,a,b) for ( i = a; i >= b; i--)
#define MID(a, b) (a + ((b - a) >> 1))
#define pb push_back
typedef long long  LL;
#define in(a,b,c) ((a) <= (b) && (b) <= (c))
#define ms(a,b) memset((a),(b),sizeof(a))

#define all(v) (v).begin(),(v).end()
#define pb push_back
#define ull unsigned long long int
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

string to_string(long long x) { stringstream ss; ss << x; return ss.str(); }
long long to_int(const string &s) { stringstream ss; ss << s; long long x; ss >> x; return x; }

#define MAX 100005
#define INF 9999999

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int cnt[2005];
    ull up[1005];
    ull down[1005];
    int n;
    while(cin >> n){
     ull a,b;
     int i;
     ull same=0;
        ms(cnt,0);
        ms(up,0);
        ms(down,0);
        forl(i,0,n){
           // scanf("%llu %llu",&a,&b);
            cin >> a >> b;
            cnt[a+b]++;
            if(a == b){
                same++;
                continue;
            }
            
            if(b>a){
                up[b-a]++;
            }
            else{
                down[a-b]++;
            }
        }
        ull ans=0;
        forl(i,2,2001){
            a = cnt[i];
            if(a>1){
               ans +=  (a*(a-1))/2;
            }
        }
        if(same>1)
        ans += ((same)*(same-1))/2;
        forl(i,1,1001){
            if(up[i]>1){
                ans += (up[i]*(up[i]-1))/2;
            }
            if(down[i]>1){
                ans += (down[i]*(down[i]-1))/2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
