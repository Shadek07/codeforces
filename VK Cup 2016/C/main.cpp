

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

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n,d,h;
    int i,j,k;
    while(cin >> n >> d >> h){
        if(n==2){
            if(d == 1 && h == 1){
                cout << 1 << " " << 2 << endl;
            }else{
                cout << -1 << endl;
            }
            continue;
        }
        if(2*h < d){
            cout << -1 << endl;
            continue;
        }
        if(d == 1){
            cout << -1 << endl;
            continue;
        }
        int a = 1;
        int edge=n-1;
        forl(i,0,h){
            cout << a << " " << a+1 << endl;
            edge--;
            a++;
        }
        int rem = d-h;
        if(rem == 0){
            a++;
            while(edge){
                cout << 2 << " " << a << endl;
                a++;
                edge--;
            }
        }else{
           a++;
           cout << 1 << " " << a << endl;
           //a++;
           edge--;
           rem--;
           while(rem && edge && a<=n){
                cout << a << " " << a+1 << endl;
                edge--;
                a++;
                rem--;
           }
           a++;                               
           while(edge){
               cout << 1 << " " << a << endl;
               a++;
               edge--;
           } 
        }
        
    }
    return 0;
}
