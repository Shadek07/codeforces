
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
typedef pair<long long,long long> pii;
typedef vector<pii> vpii;

string to_string(long long x) { stringstream ss; ss << x; return ss.str(); }
long long to_int(const string &s) { stringstream ss; ss << s; long long x; ss >> x; return x; }

#define MAX 100005

int comp(pii p1, pii p2){
    if(p1.first < p2.first){
        return 1;
    }
    else return 0;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n;
    vpii vp;
    int i,j;
    long long a,b;
    pii p1, p2;
    
    while(cin >> n){
        long long area;
        vp.clear();
        forl(i,0,n){
            cin >> a >> b;
            vp.pb(make_pair(a,b));
        }
        sort(all(vp),comp);
        if(n == 1){
            cout << -1 << endl;
        }else if(n==2){
            p1 = vp[0];
            p2 = vp[1];
            if(p1.first != p2.first && p1.second != p2.second){
                area =  abs(p1.first-p2.first)*abs(p1.second-p2.second);
                if(area == 0){
                    cout << -1 << endl;
                }else{
                    cout << area << endl;
                }
            }else{
                cout << -1 << endl;
            }
        }
        else if(n == 3){
                
            if(vp[0].first == vp[1].first){
                area = abs(vp[0].second - vp[1].second);
                area *= abs(vp[0].first - vp[2].first);
                
            }else{
                area = abs(vp[1].second - vp[2].second);
                area *= abs(vp[0].first - vp[2].first);
            }
            if(area == 0){
                    cout << -1 << endl;
                }else{
                    cout << area << endl;
                }
        }else{
            forl(i,0,n){
                //cout << vp[i].first << " " << vp[i].second << endl;
            }
            area= abs(vp[0].second - vp[1].second)*abs(vp[0].first - vp[2].first);
            if(area == 0){
                cout << -1 << endl;
            }else{
                cout << area << endl;
            }
        }
    }
    
    return 0;
}
