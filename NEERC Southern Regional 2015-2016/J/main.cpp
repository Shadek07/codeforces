
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

bool vis[11][11];

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    char in[11][11];
    int i,k,j,a,b;
    int w,h;
    while(cin >> w >> h){
        getchar();
        forl(i,0,w){
            gets(in[i]);
        }
        int dir=-1;
        
        forl(i,0,w){
            forl(j,0,h){
                if(in[i][j] != '.' && in[i][j] != '*'){
                    a = i;
                    b = j;
                    if(in[i][j] == 'U')
                        dir = 0;
                    else if(in[i][j] == 'R')
                        dir = 1;
                    else if(in[i][j] == 'D')
                        dir = 2;
                    else if(in[i][j] == 'L')
                        dir = 3;
                    i = w;
                    break;
                }
            }
        }
        int area = 1;
        ms(vis,false);
        vis[a][b] = true;
        int total = 1005;
        while(total){
            if(dir == 0){
                if(a > 0 && (in[a-1][b] != '*')){
                    if(in[a-1][b] == '.' && !vis[a-1][b]){
                        area++;
                        vis[a-1][b] = true;
                    }
                    a--;
                }else{
                    dir = 1;
                }
            }
            else if(dir == 1){
                if(b < h-1&& (in[a][b+1] != '*')){
                    if(in[a][b+1] == '.' && !vis[a][b+1]){
                        area++;
                        vis[a][b+1] = true;
                    }
                    b++;
                }else{
                    dir = 2;
                }
            }
            else if(dir == 2){
                if(a < w-1&& (in[a+1][b] != '*')){
                    if(in[a+1][b] == '.'&& !vis[a+1][b]){
                        area++;
                        vis[a+1][b] = true;
                    }
                    a++;
                }else{
                    dir = 3;
                }
            }
            else if(dir == 3){
                if(b > 0&& (in[a][b-1] != '*')){
                    if(in[a][b-1] == '.'&& !vis[a][b-1]){
                        area++;
                        vis[a][b-1] = true;
                    }
                    b--;
                }else{
                    dir = 0;
                }
            }
            total--;
        }
        cout << area << endl;
    }
    return 0;
}

