

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
    char in[101][1005];
    int i,j,k;
    while(cin >> n){
        getchar();
        forl(i,0,n){
            gets(in[i]);
        }
        int ans = 0;
        int tmp;
        bool vis[105];
        forl(i,0,n){
        }
        for(i=0;i<26;i++){
            forl(j,0,26){
                tmp = 0;
                forl(k,0,n){
                    int len = strlen(in[k]);
                    int a;
                    bool ok=true;
                    forl(a,0,len){
                        int c = in[k][a]-'a';
                        if(!(c == i || c == j)){
                            ok=false;
                            break;
                        }
                    }
                    if(ok){
                        tmp += len;
                    }
                }
                ans = max(ans,tmp);
            }
        }
        cout << ans << endl;
        
    }
    return 0;
}
