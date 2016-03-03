
#pragma comment(linker,"/STACK:16777216")
#pragma  warning ( disable: 4786)
#include <bits/stdc++.h>
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
#define MID(a, b) (a + ((b - a) >> 1))
#define pb push_back
typedef long long  LL;
#define in(a,b,c) ((a) <= (b) && (b) <= (c))
#define ms(a,b) memset((a),(b),sizeof(a))

#define all(v) (v).begin(),(v).end()
#define pb push_back
#define ull unsigned long long int
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

string to_string(long long x) { stringstream ss; ss << x; return ss.str(); }
long long to_int(const string &s) { stringstream ss; ss << s; long long x; ss >> x; return x; }

#define MAX 5005
#define INF 9999999

int main(void)
{
    //freopen("1.txt", "r", stdin);
    freopen("2.txt", "w", stdout);
    int row[MAX];
    int col[MAX];
    int rowtime[MAX];
    int coltime[MAX];
    int i,j,k,n,m,op,rc,c;
    cout << 20 << " " << 5000 << " " << 10000 << endl;
    forl(i,0,10000){
        cout << 1 << " " << 2 << " " << 100 << endl;
    }
    return 0;
    while(cin >> n >> m >> k){
        forl(i,0,n){
            row[i] = 0;
            rowtime[i] = 0;
        }
        forl(i,0,m){
            col[i] = 0;
            coltime[i] = 0;
        }
        forl(i,0,k){
            cin >> op >> rc >> c;
            rc--;
            if(op==1){
                row[rc] = c;
                rowtime[rc] = i+1;
            }else{
                col[rc] = c;
                coltime[rc] = i+1;
            }
        }
        
        forl(i,0,n){
            forl(j,0,m){
                if(rowtime[i] > coltime[j]){
                    cout << " " << row[i];
                }else{
                    cout << " " << col[j];
                }
            }
            cout << endl;
        }
        
    }
    return 0;
}
