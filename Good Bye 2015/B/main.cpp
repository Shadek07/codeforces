
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
#include<climits>
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
#define INF 9999999
//#define clearBit(S, j) (S & ~(1LLU << j))
ull clearBit(ull S, long j){
    return (S & ~(1LLU << j));
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    ull a, b;
    ull t;
    ull i;
    long j;
    //cout << ULLONG_MAX << endl;
    while(cin >> a >> b){
        int cnt=0;
        set<ull> st;
        for(i=64;i>=2;i--){
                if(i==64){
                    t = ULLONG_MAX;
                }
                else
                t = (unsigned long long)(pow(2, i) - 1);
            
            for(j=i-2;j>=0;j--){
                ull tmp = clearBit(t,j);
                if(tmp >= a && tmp <=b){
                    //cout << t << " "; 
                  
                  //cnt++;
                  if(st.find(tmp) == st.end()){
                      cnt++;
                      char buffer [70];
                      itoa (tmp,buffer,2);
                      //printf ("%s\n",buffer);
                      st.insert(tmp);
                  }
                }  
            }  
        }
        set<ull> ::iterator it;
        for(it = st.begin(); it != st.end(); it++){
            //cout << *it << endl;
        }
        cout << cnt << endl;
    }
    return 0;
}
