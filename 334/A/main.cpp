
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
    int m[6];
    int w[6];
    int s,u;
    int i,j,k;
    int tmp;
    int ans;
    int val[5] = {500,1000,1500,2000,2500};
    int mult[5] = {2,4,6,8,10};
    int mn[5] = {150,300,500,600,750};
    while(cin >> m[0]){
        forl(i,0,4){
            cin >> m[i+1];
        }
        forl(i,0,5){
            cin >> w[i];
        }
        ans = 0;
        cin >> s >> u;
        ans += (100.0*s);
        ans -= (50.0*u);
        forl(i,0,5){
            int temp = ((val[i]-(m[i]*mult[i]))) - (50*w[i]);
            tmp =  mn[i];
            //int t1 = 0.3*val[i];
            //int t2 = temp;
            //t1 = max(t1,t2);
            if(tmp > temp)
            ans += tmp;
            else
                ans += temp;
        }
        
        cout << ans << endl;
    }
    return 0;
}

