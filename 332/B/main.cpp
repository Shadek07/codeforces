
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
    int n,m;
    vector<int> f,b;
    int i,j,k;
    int a;
    int ind[MAX];
    int deg[MAX];
    while(cin >> n >> m){
        f.clear();
        b.clear();
        ms(deg,0);
        forl(i,0,n){
            scanf("%d",&a);
            f.pb(a);
            ind[a] = i+1;
            deg[a]++;
        }
        forl(i,0,m){
            scanf("%d",&a);
            b.pb(a);
        }
        vector<int> ans;
        int imp=0;
        forl(i,0,m){
            int val = b[i];
            //int cnt = count(all(f), val);
            if(deg[val] == 0){
                imp = 1;
                //cout << "Impossible\n";
                //return;
                break;
            }else if(deg[val] > 1){
                imp = 2;
                //break;
            }else{
                ans.pb(ind[val]);
            }
        }
        if(imp == 1){
            cout << "Impossible\n";
        }
        else if(imp == 2){
            cout << "Ambiguity\n";
        }else{
            cout << "Possible\n";
            forl(i,0,m){
                if(i>0){
                    cout << " ";
                }
                cout << ans[i];
            }
            cout << endl;
        }
    }
    return 0;
}
