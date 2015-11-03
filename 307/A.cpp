
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

int comp(pii pa, pii pb)
{
    if(pa.first > pa.second)
        return 1;
    return 0;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int t;
    int n;
    vector<pii> v;
    cin >> n;
    int i;
    forl(i,0,n)
    {
        int a;
        cin >> a;
        v.pb(make_pair(a,i));
    }
    
    sort(v.begin(),v.end(),comp);
    vector<int> v1(n,0);
    forl(i,0,n)
    {
        pii pa = v[i];
        int vl = pa.first;
        if(i == 0)
        {
            v1[pa.second] = 1;
        }
        else
        {
            pii pb = v[i-1];
            int val = pb.first;
            if(vl == val)
            {
                v1[pa.second] = v1[pb.second];
            }
            else
            {
                v1[pa.second] = v1[pb.second] + 1;
            }
            
        }
        forl(i,0,n)
        {
            if(i==0)
                cout << v1[i];
            else cout << " " << v1[i];
        }
        cout << endl;
    }
    
    return 0;
}
