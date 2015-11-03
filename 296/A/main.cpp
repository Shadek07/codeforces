
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
    unsigned long long int a,b;
    char s[200002],t[200002];
    int n,i,j,k;
    /*while(cin >> a >> b)
    {
        unsigned long long int ans=0;
        while(a != b)
        {
            ans += a/b;
            a = a - (a/b)*b;
            if(a == 0)
                break;
            if(a<b)
                swap(a,b);
        }
        cout << ans << endl;
    }*/
    while(cin >> n)
    {
        vector<int> small[26];
        getchar();
        gets(s);
        gets(t);
        int cnt=0;
        forl(i,0,n)
        {
            if(s[i] != t[i])
                cnt++;
        }
        if(cnt == 0)
        {
            cout << cnt << endl;
            cout << -1 << " " << -1 << endl;
            continue;
        }
        
        forl(i,0,n)
        {
            small[ t[i]-'a'].pb(i);
        }
        
        int mx=0;
        int a=-1,b=-1;
        
        forl(i,0,n)
        {
            int d = s[i]-'a';
            int sz = small[d].size();           
               
            forl(j,0,sz)
            {
                if(small[d][j] != i)
                {
                    if(t[i] == s[small[d][j]] && t[i] == s[i])
                        continue;
                    if(s[i] == t[i])
                        continue;
                    if(t[small[d][j]] == s[small[d][j]])
                        continue;
                    mx = max(mx,1);
                    a = i;
                    b = small[d][j];
                    
                    if(s[small[d][j]] == t[i])
                    {
                        mx = 2;
                        a = i;
                        b = small[d][j];
                        j = sz;
                        i = n;
                        break;
                    }
                    else
                    {
                        mx = max(mx,1);
                        a = i;
                        b = small[d][j];
                    }
                }
            }
        }
        //cout << mx << endl;
        cnt -= mx;
        cout << cnt << endl;
        if(a == -1 && b == -1)
        {
            cout << a << " " << b << endl;
            
        }
        else
        cout << a+1 << " " << b+1 << endl;
        
    }
    
    return 0;
}
