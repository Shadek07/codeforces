
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
map<int, int> mp1, mp2;
bool sell[MAX], buy[MAX];
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n,s;
    int i,j,k;
    char c;
    int p,q;
    while(cin >> n >> s){
        getchar();
        ms(sell,0);
        ms(buy,0); 
        mp1.clear();
        mp2.clear(); 
        int mxp=-1,mxp2=-1;  
        forl(i,0,n)
        {
            scanf("%c %d %d", &c, &p,&q);
            getchar();
            if(c == 'B')
            {
                if(mp1[p])
                {
                    mp1[p] += q;
                }
                else{
                    mp1[p] = q;
                }
                buy[p] = true;
                mxp = max(mxp,p);
            }
            else
            {
                mp2[p]?mp2[p] += q: mp2[p] = q;
                sell[p] = true;
                mxp2 = max(mxp2,p);
            }           
        }
        j = 0;
        k = 0;
        forl(i,0,mxp2+1){
            if(sell[i])
            {
                j++;
                if(j == s)
                    break;
            }
        }
        for(;i>=0;i--)
        {
            if(sell[i])
            {
                cout << "S " << i << " " << mp2[i] << endl;
            }
        }
        for(i = mxp; i>=0;i--)
        {
            if(buy[i])
            {
                k++;
                cout << "B " << i << " " << mp1[i] << endl;
                if(k == s)
                    break;                   
            }
        }
        
        
    }
    return 0;
}
