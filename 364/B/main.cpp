
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

bool row[MAX];
bool col[MAX];

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    std::ios_base::sync_with_stdio(false);
    long long int n,m;
    long long int a,b;
    int i;
    while(cin >> n >> m){
        long long int ans = n*n;
        ms(row,false);
        ms(col,false);
        int rattack=0;
        int cattack=0;
        forl(i,0,m){
            cin >> a >> b;
            a--;
            b--;
            if(!row[a]){
                rattack++;
            }
            if(!col[b]){
                cattack++;
            }
           /* if(rattack == n && cattack == n){
                cout <<" " << 0;
                continue; 
            }*/
            if(row[a] && col[b]){
                
            }
            else if(row[a]){
                ans -= (n-rattack);
            }else if(col[b]){
                ans -= (n-cattack);
            }else{
                ans -= (n-rattack);
                ans -= (n-cattack);
                ans--;
            }
            
            row[a] = col[b] = true;
            cout << " " << ans << " ";
        }
        cout << endl;
    }
    return 0;
}
