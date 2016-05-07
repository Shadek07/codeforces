
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

#define MAX 5005
#define INF 9999999

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int cnt[MAX];
    int n;
    int arr[MAX];
    int i,j,k;
    while(cin >> n){
        forl(i,0,n){
            cin >> arr[i];
        }
        ms(cnt,0);
        forl(i,0,n){
            int mx=1;
            int ind=arr[i];
            cnt[ind]++;
            int tmp[MAX];
            ms(tmp,0);
            tmp[ind]++;
            forl(j,i+1,n){
                tmp[arr[j]]++;
                if(tmp[arr[j]] > mx){
                    cnt[arr[j]]++;
                    mx = tmp[arr[j]];
                    ind = arr[j];
                }else if(tmp[arr[j]] == mx && arr[j] < ind){
                    ind = arr[j];
                    cnt[arr[j]]++;
                }else{
                    cnt[ind ]++;
                }
            }
        }
        forl(i,1,n+1){
            cout << " " << cnt[i];
        }
        cout << endl;
    }
    return 0;
}
