
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

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    ull arr[5];
    ull brr[5];
    int a,b;
    int i,j;
    while(cin >> a >> b){
        forl(i,1,5){
            arr[i] = (a>=i)+(a-i)/5;
            brr[i] = (b>=i)+(b-i)/5;
            //cout << arr[i] << " " << brr[i] << endl;
        }
        arr[0] = a/5;
        brr[0] = b/5;
        unsigned long long int ans = 0;
        ans += arr[0]*brr[0];
        ans += arr[1]*brr[4];
        ans += arr[2]*brr[3];
        ans += arr[3]*brr[2];
        ans += arr[4]*brr[1];
        cout << ans << endl;
    }
    return 0;
}
