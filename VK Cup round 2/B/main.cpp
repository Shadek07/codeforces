
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
bool vis[MAX];
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    long long int n;
    char in[MAX];
    long long int d[MAX];
    int i,j;
    while(cin >> n){
        getchar();
        gets(in);
        forl(i,1,n+1){
            cin >> d[i];
        }
        ms(vis,false);
        vis[1]=true;
        long long int cur=1;
        while(true){
            if(in[cur-1] == '>'){
                cur += d[cur];
                if(cur > n){
                    cout << "FINITE\n";
                    break;
                }
                if(vis[cur]){
                    cout << "INFINITE\n";
                    break;
                }
                vis[cur]=true;
            }else{
                cur -= d[cur];
                if(cur <= 0){
                    cout << "FINITE\n";
                    break;
                }
                if(vis[cur]){
                    cout << "INFINITE\n";
                    break;
                }
                vis[cur]=true;
            }
        }
    }
    return 0;
}
