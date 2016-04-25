
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

#define MAX 105
#define INF 9999999

int arr[MAX][MAX];
int n,m,q;
int d[10000][4];
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int i,j,k;
    int t;
    while(cin >> n >> m >> q){
        forl(i,0,q){
            cin >> t;
            d[i][0] = t;
            if(t==1 || t == 2){
                cin >> d[i][1];
            }else{
                cin >> d[i][1] >> d[i][2] >> d[i][3];
            }
        }
        forl(i,1,n+1){
            forl(j,1,m+1){
                arr[i][j]=0;
            }
        }
        int lst;
        for(j=q-1;j>=0;j--){
            if(d[j][0] == 1){
                lst = arr[d[j][1]][m];
                for(i=m-1;i>=1;i--){
                    arr[d[j][1]][i+1] = arr[d[j][1]][i];
                } 
                arr[d[j][1]][1] = lst;
            }else if(d[j][0] == 2){
                lst = arr[n][d[j][1]];
                for(i=n-1;i>=1;i--){
                    arr[i+1][d[j][1]] = arr[i][d[j][1]];
                } 
                arr[1][d[j][1]] = lst;
            }else{
                arr[d[j][1]][d[j][2]] = d[j][3];
            }
        }
        forl(i,1,n+1){
            forl(j,1,m+1){
                cout << " " << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
