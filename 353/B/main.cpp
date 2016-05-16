
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

bool inside(long long int a,int n){
    if(a>=1 && a<=n)
        return true;
    return false;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int a,b,c,d,n;
    int i,j,k;
    int a1;
    a1 = 0;
    d = 1e9;
    c = 1e9;
    int n1;
    int n2;
    n1 = a-b;
    if((c-a1)*d < 0){
        cout << "1\n";
    }
    else{
        cout <<"2\n";
    }
    while(cin >> n >> a >> b >> c >> d){
        long long int ans = 0;
        forl(i,1,n+1){
            long long int s = a+b+i;
            long long int s2 = a+c;
            if(!inside(s-s2,n))
                continue;
            long long int x = s-s2;
            long long int s3 = b+d;
            if(!inside(s-s3,n))
                continue;
            long long int s4 = c+d;
            if(!inside(s-s4,n))
                continue;
            ans++;
        }
        cout << ans*n << endl;
    }
    return 0;
}

