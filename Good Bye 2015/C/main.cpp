
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

#define MAX 501
#define INF 9999999

int dp[501][501];
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n,m;
    char in[MAX][MAX];
    int i,j,k;
    int a,b,c,d;
    int adjrow[MAX][MAX];
    int adjcol[MAX][MAX];
    while(cin >> n >> m){
        getchar();
        forl(i,0,n){
            gets(in[i]);
        }
        forl(i,0,n){
            forl(j,0,m){
                if(i==0 && j==0){
                    dp[i][j]=0;
                    continue;
                }
                dp[i][j]=0;
                if(i>0){
                    dp[i][j] += dp[i-1][j];
                }
                if(j>0){
                    dp[i][j] += dp[i][j-1];
                }
                if(i> 0 && j > 0){
                    dp[i][j] -= dp[i-1][j-1];
                }
                if(in[i][j] == '.'){
                    if(j>0 && in[i][j-1] == '.'){
                        dp[i][j]++;
                    }
                    if(i>0 && in[i-1][j] == '.'){
                        dp[i][j]++;
                    }
                }
            }
        }
        //cout << dp[3][4] << endl;
        forl(i,0,n){
            forl(j,0,m){
                adjrow[i][j] = 0;
                adjcol[i][j]=0;
            }
        }
        //adj row
        forl(i,1,n){
            forl(j,0,m){
                if(j==0){
                    if(in[i][j]=='.' && in[i-1][j] == '.'){
                        adjrow[i][j] = 1;
                    }
                    else{
                        adjrow[i][j] = 0;
                    }
                    continue;
                }
                adjrow[i][j] = adjrow[i][j-1] + (in[i][j]=='.' && in[i-1][j] == '.');
            }
        }
        
        //adj col
        forl(j,1,m){
            forl(i,0,n){
                if(i==0){
                    if(in[i][j]=='.' && in[i][j-1] == '.'){
                        adjcol[i][j] = 1;
                    }
                    else{
                        adjcol[i][j] = 0;
                    }
                    continue;
                }
                adjcol[i][j] = adjcol[i-1][j] + (in[i][j]=='.' && in[i][j-1] == '.');
            }
        }
        int q;
        cin >> q;
        forl(i,0,q){
            scanf("%d %d %d %d",&a,&b,&c,&d);
            a--;
            b--;
            c--;
            d--;
            ull ans=0;
            ans += dp[c][d];
            if(a>0)
                ans -= dp[a-1][d];
            if(b>0)
                ans -= dp[c][b-1];
            if(a>0 && b>0)
                ans += dp[a-1][b-1];
             if(a>0){
                int tmp = adjrow[a][d];
                if(b>0)
                    tmp -= adjrow[a][b-1];
                ans -= tmp;
             }
             if(b>0){
                int tmp1 = adjcol[c][b];
                if(a>0)
                    tmp1 -= adjcol[a-1][b];
                ans -= tmp1;
             }
             cout << ans << endl;
        }
    }
    return 0;
}
