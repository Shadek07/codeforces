
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
    int arr[501][501];
    bool vis[500*500+1];
    int n,k,i,j;
    while(cin >> n >> k){
        int ans = 0;
        ms(vis,false);
        int start = n*n;

        for(i=1;i<=n;i++){
            for(j = n;j>=k;j--){
                arr[i][j] = start;
                vis[start] = true;
                if(j==k){
                    ans += start;
                }
                start--;
            }
        }
        start = 1;
        for(i=1;i<=n;i++){
            for(j=1;j<k;j++){
                arr[i][j] = start;
                start++;
            }
        }
        cout << ans << endl;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(j>1)
                    cout << " ";
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}

