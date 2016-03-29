

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

#define MAX 150001
#define INF 9999999

struct frnd{
    int id;
    int power;
    frnd(int i,int p){
        id = i;
        power = p;
    }
};

int pw[MAX];

/**
max priority queue: maximum value will come first
*/
bool operator<(const frnd &a, const frnd &b)
{
  return a.power < b.power;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n,k,q,i,j;
    int c,d;
    while(cin >> n >> k >> q){
        priority_queue<frnd> pq;
        forl(i,1,n+1){
            cin >> pw[i];
        }
        forl(i,0,q){
            cin >> c >> d;
            if(c==1){
                pq.push(frnd(d, pw[d]));
            }else{
                bool ok=false;
                int st = d;
                int cnt=k;
                vector<frnd> vf;
                while(cnt && !pq.empty()){
                    frnd t = pq.top();
                    pq.pop();
                    vf.pb(t);
                    if(t.id == st){
                        ok=true;
                        break;
                    }
                    cnt--;
                }
                if(ok){
                    cout << "YES\n";
                }else{
                    cout << "NO\n";
                }
                int sz = vf.size();
                forl(j,0,sz){
                    pq.push(vf[j]);
                }
            }
        }
    }
    
    return 0;
}
