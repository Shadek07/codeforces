
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

int comp(pii p1, pii p2){
    if(p1.second < p2.second)
        return true;
    return false;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    std::ios_base::sync_with_stdio(false);
    vpii vp;
    int n;
    int i,j,k;
    while(cin >> n){
        vp.clear();
        forl(i,0,n){
            cin >> j;
            vp.pb(make_pair(i,j));
        }
        sort(all(vp),comp);
        int s=0;
        
        int m = n/2;
        forl(i,0,m){
            cout << vp[i].first+1 << " " << vp[n-1-i].first+1 << endl;
        }
    }
    return 0;
}
