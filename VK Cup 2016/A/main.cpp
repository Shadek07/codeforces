
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

#define MAX 1005
#define INF 9999999

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    
    //freopen("1.txt", "w", stdout);
    int i,j,k;
    /*cout << 1000 << " " << 2 << endl;
    int p1=1;
    forl(i,0,1000){
        cout << " " << p1 ;
        p1++;
    }
    cout << endl;
    int t1=1;
    forl(i,0,1000){
        cout << " " << t1 ;
        t1++;
    }
    cout << endl;
    return 0;*/
    int t[MAX];
    int p[MAX];
    int n,c;
    while(cin >> n >> c){
        forl(i,0,n){
            cin >> p[i];
        }
        forl(i,0,n){
            cin >> t[i];
        }
        int a = 0,b=0;
        int spent = 0;
        forl(i,0,n){
            a += max(0, (p[i] - (spent+t[i])*c));
            spent += t[i];
        }
        spent = 0;
        forrev(i,n-1,0){
            b += max(0, (p[i] - (spent+t[i])*c));
            spent += t[i];
        }
        if(a == b){
            cout << "Tie\n";
        }
        else if(a>b){
            cout << "Limak\n";
        }else{
            cout << "Radewoosh\n";
        }
        
    }
    return 0;
}
