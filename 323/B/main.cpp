
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

int comp(pii p1, pii p2){
    if(p1.second < p2.second)
        return 1;
    return 0;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    
    int n;
    int a,i;
    int arr[1005];
    bool vis[1005];
    while(cin >> n){
        ms(vis,false);
        forl(i,0,n){
            scanf("%d",&arr[i]);
        }
        
        int ans=0;
        int dir = 1;
        int curr = -1;
        int collect=0;
        while(collect < n){
            
            if(dir)
            for(i=curr+1;i<n;i++){
                if(collect >= arr[i] && !vis[i]){
                    collect++;
                    curr = i;
                    vis[i]=true;
                }
            }
            else{
                for(i=curr-1;i>=0;i--){
                    if(collect >= arr[i]&& !vis[i]){
                        collect++;
                        curr = i;
                        vis[i]=true;
                    }
                }
            }
            ans++;
            dir ^= 1;
        }
        cout << ans-1 << endl;
    }
    return 0;
}
