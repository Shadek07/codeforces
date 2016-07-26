
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

int getId(char c){
    if(c>='A' && c <= 'Z'){
        return c-'A';
    }else{
        return 26+ (c-'a');
    }
}
int a1[MAX];
int a2[MAX];
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    //std::ios_base::sync_with_stdio(false);
    bool vis[100];
    int n;
    int i;
    char in[MAX];
    vector<int> stf,stb;
    //set<int>::iterator it;
    int a,b;
    while(cin >> n){
        getchar();
        gets(in);
        int total=0;
        stf.clear();
        stb.clear();
        a1[0] = 0;
        a2[n+1] = 0;
        ms(vis,false);
        //cout << in << endl;
        int d;
        forl(i,0,n){
            d = getId(in[i]);
            if(!vis[d]){
                total++;
                a1[i+1] = a1[i]+1;
                vis[d] = true;
            }else{
                a1[i+1] = a1[i];
            }
            stf.pb(a1[i+1]);
        }
        
        ms(vis,false);
        for(i=n-1;i>=0;i--){
            d = getId(in[i]);
            if(!vis[d]){
                a2[i+1] = a2[i+2]+1;
            }else{
                a2[i+1] = a2[i+2];
            }
            stb.pb(a2[i+1]);    
            vis[d] = true;
        }
        int ans = MAX;
        forl(i,0,n){
            //forward
            a = a1[i+1] + total -1;
            vector<int>::iterator it,it1;
            it = lower_bound (all(stf), a);
            if(it != stf.end()){
                b = (it - stf.begin())-i;
                ans = min(ans,b+1);
            }
            
            //backward
            a = a2[i+1] + total -1;
            it1 = lower_bound (all(stb), a);
            if(it1 != stb.end()){
                b = (it1 - stb.begin())-(n-1-i);
                ans = min(ans,b+1);
            }
        }
        
        cout << ans << endl;
        
    }
    return 0;
}
