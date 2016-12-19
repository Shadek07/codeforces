
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

vpii vs;
int n;
int comp(pii p1, pii p2){
    if(p2.second == p1.second){
        return p1.first < p2.first;
    }
    else if(p1.second < p2.second){
        return true;
    }else
        return false;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int q,i,j,k;
    while(cin >> n >> q){
        vs.clear();
        forl(i,0,n){
            vs.pb(make_pair(i+1,-1));
        }
        int ti,ki,di;
        forl(i,0,q){
            scanf("%d %d %d",&ti,&ki,&di);
            int sum=0;
            int cnt=0;
            vector<int> ids;
            forl(j,0,n){
                if(ti >= vs[j].second ){
                    sum += vs[j].first;
                    ids.pb(j);
                    cnt++;
                }
                if(cnt == ki){
                    break;
                }
            }
            int sz = ids.size();
            if(cnt == ki){
                cout << sum << endl;
                forl(j,0,sz){
                    vs[ids[j] ].second = ti+di;
                }
            }else{
                cout << -1 << endl;
            }
            //sort(all(vs), comp);
        }
    }
    return 0;
}
