
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
    char in[9][9];
    int a,b;
    int cnt,i,j,k;
    while(gets(in[0])){
        forl(i,0,7){
            gets(in[i+1]);
        }
        a = 10;
        b = 10;
        forl(i,0,8){
            forl(j,0,8){
                if(in[i][j] == 'W'){
                        bool ok=true;
                    for(k=i-1;k>=0;k--){
                        if(in[k][j]!='.')
                        {
                            ok=false;
                            break;
                        }
                    }
                    if(ok){
                        a = min(a,i);
                    }
                }else if(in[i][j] == 'B'){
                    bool o=true;
                    for(k=i+1;k<8;k++){
                        if(in[k][j]!='.')
                        {
                            o=false;
                            break;
                        }
                    }
                    if(o){
                        b = min(b,7-i);
                    }
                }
            }
        }
        if(a<=b)
            cout << "A\n";
        else
            cout << "B\n";
     
    }
    return 0;
}
