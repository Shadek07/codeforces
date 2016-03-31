
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

#define MAX 10001
#define INF 9999999

map<pii,int> mp; //region,mark
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n,m;
    int i,j,k;
    string fir[MAX];
    string sec[MAX];
    int mx[MAX];
    int secmax[MAX];
    string s;
    int r,score;
    while(cin >> n >> m){
        forl(i,1,m+1){
            mx[i] = -1;
            secmax[i] = -1;
        }
        mp.clear();
        forl(i,0,n){
            cin >> s >> r >> score;
            //cout << s << endl;
            if(score>mx[r]){
                    
                secmax[r] = mx[r];
                sec[r] = fir[r];
                //cout << "here1\n";
                mx[r] = score;
                fir[r] = s;
            }else if(score>secmax[r]){
                secmax[r] = score;
                sec[r] = s;
                //cout << "here2\n";
            }
            mp[make_pair(r,score)]++;
        }
        forl(i,0,m){
            if(mp[make_pair(i+1,mx[i+1])] > 2){
                cout << "?\n";
                continue;
            }
            if(mx[i+1] > secmax[i+1] && mp[make_pair(i+1,secmax[i+1])] > 1){
                cout << "?\n";
                continue;
            }
            cout << fir[i+1] << " " << sec[i+1] << endl;
        }
    }
    return 0;
}
