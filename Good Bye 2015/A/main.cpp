
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
#define INF 9999999

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n;
    char in[10];
    char op[10];
    int i;
    int month[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    while(cin >> n >> in >> op){
        if(strcmp(op,"week") == 0){
            /*int cnt=0;
            forl(i,5,5+366){
                int mod = i%7;
                if(mod ==0)
                    mod=7;
                if(mod == n){
                    cnt++;
                }
            }
            cout << cnt << endl;*/
            n--;
            int day=1;
            int mon=0;
            int week=4;
            int counter=0;
            while(mon != 12){
                if(week == n)
                    counter++;
                week++;
                if(week == 8)
                    week=1;
                if(day == month[mon]+1){
                    day=1;
                    mon++;
                    continue;
                }
            }
            cout << counter << endl;
        }else{
            if(n == 31){
                cout << 7 << endl;
                continue;
            }
            if(n == 30){
                cout << 11 << endl;
                continue;
            }
            cout << 12 << endl;
        }
    }
    return 0;
}
