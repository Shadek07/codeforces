
#pragma comment(linker,"/STACK:16777216")
#pragma  warning ( disable: 4786)
#include <bits/stdc++.h>
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

vpii vp;

int cross_product(int i, int j, int k){
    long long int ux = vp[j].first - vp[i].first;
    long long int uy = vp[j].second - vp[i].second;
    long long int vx = vp[k].first - vp[i].first;;
    long long int vy = vp[k].second - vp[i].second;
    long long int value = ux*vy - uy*vx;
    if(value > 0)
        return 1;
    return 0;
}

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n;
    int i,j,k;
    while(cin >> n){
            vp.clear();
        forl(i,0,n+1){
            cin >> j >> k;
            vp.pb(make_pair(j,k));
        }
        int cnt=0;
        for(i=0;i<=n-2;i++){
            cnt += cross_product(i,i+1,i+2);
        }
        cout << cnt << endl;
    }
    return 0;
}
