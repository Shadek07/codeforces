
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
int64_t gcd(int64_t a, int64_t b)
{
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int64_t m;
    int i;
    int64_t h1,a1;
    int64_t x1,y1;
    int64_t h2,a2;
    int64_t x2,y2;
    map<int64_t,int> mp1;
    map<int64_t,int> mp2;
    while(cin >> m)
    {
        scanf("%I64d %I64d",&h1,&a1);
        scanf("%I64d %I64d",&x1,&y1);
        scanf("%I64d %I64d",&h2,&a2);
        scanf("%I64d %I64d",&x2,&y2);
        mp1.clear();
        mp2.clear();
        mp1[h1] = 1;
        int cnt1 = 0, cnt2 = 0;
        h1 = (((x1%m)*(h1%m))%m + y1)%m;
        bool ok1 = false;
        bool ok2 = false;
        while(!mp1[h1])
        {
            mp1[h1] = 1;
            cnt1++;
            if(h1 == a1)
            {
                ok1 = true;
               break; 
            }
                
            h1 = (((x1%m)*(h1%m))%m + y1)%m;
        }
        if(!ok1)
        {
            cout << -1 << endl;
            continue;
        }
        mp2[h2] = 1;
        h2 = (((x2%m)*(h2%m))%m + y2)%m;
        while(!mp2[h2])
        {
            mp2[h2] = 1;
            cnt2++;
            if(h2 == a2)
            {
                ok2 = true;
                break;
            }
                
            h2 = (((x2%m)*(h2%m))%m + y2)%m;
        }
        if(!ok2)
        {
            cout << -1 << endl;
            continue;
        }
        int64_t arr[2];
        
        arr[0] = cnt1;
        arr[1] = cnt2;
        int64_t t = 1;
        //cout << arr[0] << " " << arr[1] << endl;
        forl(i,0,2)
        {
             t = t * (arr[i] / gcd(t,arr[i]));
             //cout << t << endl;
        }
        
        cout << t << endl;
    }
    return 0;
}

