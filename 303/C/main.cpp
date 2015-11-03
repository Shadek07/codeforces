
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
    int arr[MAX][2];
    int i,j,k;
    int n;
    while(cin >> n)
    {
        forl(i,0,n)
        {
            cin >> arr[i][0] >> arr[i][1];
        }
        int cnt = 1;
        long long int last = arr[0][0];
        long long int p, l,r;
        forl(i,1,n-1)
        {
            p = arr[i][0];
            l = arr[i][0] - arr[i][1];
            r = arr[i][0] + arr[i][1];
            if(l > last) //left
            {
                last = p;
                cnt++;
            }
            else
            {
                long long int adjL = arr[i+1][0] - arr[i+1][1];
                long long int adjP = arr[i+1][0];
                if(r < adjL)
                {
                    last = r;
                    cnt++;
                }
                else if((i+1 != n-1) && r < adjP && adjL <= p)
                {
                    last = r;
                    cnt++;
                }
                else if((i+1 == n-1) && r < adjP)
                {
                    last = r;
                    cnt++;
                }
                else
                {
                    last = p;
                }
            }
        }
        
        if(n>=2)
            cnt++;
        cout << cnt << endl;
    }
    return 0;
}
