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

int hour[50];
int minute[50];
int a,b;
long long int ans;
long long int h,m;

map<pii, int> mp;

void doit(int mask, ull h1, ull m1, int hcnt, int mcnt){
    
    if(hcnt == a && mcnt == b){
        if(h1 <= h && m1 <= m){
                ans++;
        }
        return;
    }
    int i;
    ull nw;
    for(i=0;i<7;i++){
        if( (mask & (1<<i)) == 0){
            if(hcnt < a){
                nw = i*pow(7.0,hcnt) + h1; 
                //it should be 7 not 10. because we are converting base-7 to decimal
                if(nw <= h){
                    doit(mask|(1<<i),nw, m1, hcnt+1,mcnt);
                }
            }else if(mcnt < b){
                nw = i*pow(7.0,mcnt) + m1;
                if(nw<=m){
                    doit(mask|(1<<i),h1,nw,hcnt,mcnt+1);
                }
            } 
        }
    }    
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    
    long long int x;
    int i,j,k;
    while(cin >> h >> m){
        h--;
        m--;
        a = 0;
        b = 0;
        x = h;
        mp.clear();
        if(x == 0){
            a++;
        }
        while(x){
            a++;
            x /= 7;
        }
        x = m;
        if(x == 0){
            b++;
        }
        while(x){
            b++;
            x /= 7;
        }
        if(a>7 || b>7){
            cout << 0 << endl;
            continue;
        }
        if(a+b > 7){
            cout << 0 << endl;
            continue;
        }
        
        ans = 0;
        doit(0,0,0,0,0);
        cout << ans << endl;
    }
    return 0;
}
