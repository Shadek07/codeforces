
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
ull suffix[MAX];
ull arr[MAX];
bool taken[MAX];
int n;
ull next(int ind){
    if(taken[ind])
        return 0;
    if(ind==n-1)
        return arr[0];
    return arr[ind+1];
}

ull prev(int ind){
    if(taken[ind])
        return 0;
    if(ind==0)
        return arr[n-1];
    return arr[ind-1];
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    std::ios_base::sync_with_stdio(false);
    
    int i,j,k,a,c,b;
    
    while(cin >> n >> c){
        forl(i,0,n){
            cin >> arr[i];
        }
        
        suffix[n] = arr[n-1];
        for(i=n-1;i>=1;i--){
            suffix[i] = suffix[i+1] + arr[i-1];
        }
        
        unsigned long long int ans = 0;
        
        forl(i,0,n-1){
            ans += (arr[i]*arr[i+1]);
        }
        ans += (arr[n-1]*arr[0]);
        ull tmp,t;
        ms(taken,false);
        ull S = suffix[1];
        ull preS=0;
        forl(i,0,c){
            cin >> a;
            a--;
            tmp = S;
            tmp -= arr[a];
            if(a != n-1)
            tmp -= next(a);
            tmp -= preS;
            
            if(!taken[a-1])
                tmp -= prev(a);
            ans += tmp*arr[a];
            taken[a]=true;
            preS += arr[a];
        }
        
        cout << ans << endl;
    }
    return 0;
}
