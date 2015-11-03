

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
    int n;
    vector<int> v;
    int i,j,k;
    while(cin >> n){
        forl(i,0,n){
            scanf("%d",&j);
            v.pb(j);
        }
        sort(all(v));
        set<int> st;
        int sz = v.size();
        set<int>::iterator it;
        while(true){
            bool ok=false;
            sz = v.size();
            vector<int> v1;
            for(i=0;i<sz;i++){
                j = i;
                while(j < sz && v[j] == v[i]){
                    j++;
                }
                int cnt = (j - i)/2;
                for(k=0;k<cnt;k++){
                    v1.pb(v[i]+1);
                }
                if((j-i)&1){
                    v1.pb(v[i]);
                }
                if(j-i > 1){
                    ok=true;
                }
                i = j-1;
                
            }
            if(ok==false){
                cout << sz << endl;
                break;
            }
            sort(all(v1));
            v = v1;
            
        }
        
    }
    return 0;
}
