

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

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n;
    set<int> st;
    set<int>::iterator it;
    vector<int> v;
    int i,j,k;
    int a;
    
    while(cin >> n)
    {
        st.clear();
        v.clear();
        forl(i,0,n)
        {
            cin >> a;
            st.insert(a);
            v.push_back(a);
        }
        unsigned long long int ans=0;
        sort(v.begin(),v.end());
        unsigned long long int a1=0,b1=0;
        vector<unsigned long long int> save;
        for(i = n-1;i>=1;i--)
        {
            if(v[i] == v[i-1])
            {
                a1 = v[i];
                save.push_back(a1);
                i--;                  
            }
            else if(v[i]-1 == v[i-1])
            {
                a1 = v[i-1];
                save.push_back(a1);
                i--;
            }
        }
        
        sort(save.begin(),save.end());
        int sz = save.size();
        for(i=sz-1;i>=1;i--)
        {
            ans += save[i]*save[i-1];
            i--;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
