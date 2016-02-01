
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
#include<climits>
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
    int n,p;
    int i,j,k;
    int arr[MAX][2];
    while(cin >> n >> p){
        forl(i,0,n){
            scanf("%d %d",&arr[i][0],&arr[i][1]);
            //cin >> arr[i][0] >> arr[i][1];
        }
        double ans = 0.0;
        double cnt1,cnt2;
        long long a1,a2;
        forl(i,0,n-1){
            a1 = arr[i][1]/p - (arr[i][0]-1)/p;
            a2 = arr[i+1][1]/p - (arr[i+1][0]-1)/p;
            
            cnt1 = arr[i][1] - arr[i][0] + 1;
            cnt2 = arr[i+1][1] - arr[i+1][0] + 1;
            if(a1 == 0 && a2 == 0){
                continue;
            }
            if(a1 == 0){
                ans += 2000.0*((a2*cnt1*1.0)/(cnt1*cnt2));
                continue;
            }
            else if(a2 == 0){
               ans += 2000.0*((a1*cnt2*1.0)/(cnt1*cnt2)); 
               continue;
            }
            else{
                long long nota1 = (cnt1 - a1);
                long long nota2 = (cnt2 - a2);
                ans += 2000.0*((cnt1*cnt2*1.0 - (nota1*nota2))/(cnt1*cnt2));
            }
        }
        
        a1 = arr[n-1][1]/p - (arr[n-1][0]-1)/p;
        a2 = arr[0][1]/p - (arr[0][0]-1)/p;
        
        cnt1 = arr[n-1][1] - arr[n-1][0] + 1;
        cnt2 = arr[0][1] - arr[0][0] + 1;
        if(a1 == 0 && a2 == 0){
            //cout << ans << endl;
            printf("%.6lf\n",ans);
            continue;
        }
        if(a1 == 0){
            ans += 2000.0*((a2*cnt1*1.0)/(cnt1*cnt2));
            
        }
        else if(a2 == 0){
           ans += 2000.0*((a1*cnt2*1.0)/(cnt1*cnt2)); 
           
        }
        else{
            long long nota1 = (cnt1 - a1);
            long long nota2 = (cnt2 - a2);
            ans += 2000.0*((cnt1*cnt2*1.0 - (nota1*nota2))/(cnt1*cnt2));
        }
        //cout << ans << endl;
        printf("%.6lf\n",ans);
    }
    
    return 0;
}
