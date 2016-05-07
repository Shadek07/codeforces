

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

int main()
{
    int n,m;
    set<int> s1,s2;
    set<int>::iterator it1,it2;
    int pr[MAX][2];
    int i,j,k;
    int a,b;
    while(cin >> n >> m){
        forl(i,0,m){
            cin >> pr[i][0] >> pr[i][1];
            
        }
        s1.clear();
        s2.clear();
        bool ok=true;
        if(m == 0){
            cout << n-1 << endl;
            continue;
        }
        a = min(pr[0][0],pr[0][1]);
        b = max(pr[0][0],pr[0][1]);
        forl(i,1,m){
            j = min(pr[i][0],pr[i][1]);
            k = max(pr[i][0],pr[i][1]);
            if(j>=b){
                ok=false;
                break;
            }
            if(k<=a){
                ok=false;
                break;
            }
            if(k>b)
                k=b;
            if(j<a)
                j=a;
            if(k-j < b-a){
                swap(a,j);
                swap(b,k);
            }
            
        }
        if(ok==false){
            cout << 0 << endl;
            continue;
        }
        cout << b-a << endl;
        
    }
    return 0;
}
