
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

#define MAX 4002
vpii vp1;
int M[MAX][100][2];

void calculate(int n, int ind)
{
  int i, j;
  for (i = 0; i < n; i++)
      M[i][0][ind] = i;
  for (j = 1; 1 << j <= n; j++)
      for (i = 0; i + (1 << j) - 1 < n; i++){
            int a,b;
            if(ind==0){
                a = vp1[M[i][j - 1][ind]].first;
                b = vp1[M[i + (1 << (j - 1))][j - 1][ind] ].first;
            }
            else{
                a = vp1[M[i][j - 1][ind]].second;
                b = vp1[M[i + (1 << (j - 1))][j - 1][ind] ].second;
            }
            if(a < b)
                  M[i][j][ind] = M[i][j - 1][ind];
           else
              M[i][j][ind] = M[i + (1 << (j - 1))][j - 1][ind];
      }
         
} 

int comp(pii p1, pii p2){
    if(p1.first < p2.first){
        return 1;
    }
    else if(p1.first == p2.first && p1.second < p2.second){
        return 1;
    }
    return 0;
}
int comp2(pii p1, pii p2){
    if(p1.second < p2.second){
        return 1;
    }
    else if(p1.second == p2.second && p1.first < p2.first){
        return 1;
    }
    return 0;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n;
    int i,j,k,a,b,i1;
    while(cin >> n){
         
        forl(i,0,n){
            scanf("%d %d",&a,&b);
            if(a>b){
                swap(a,b);
            }
            vp1.pb(make_pair(a,b));
        }
        unsigned long long int ans = 0;
        int w,h;
        forl(k,0,2){
        if(k==0)
        sort(all(vp1),comp);
        else
            sort(all(vp1),comp2);
        //calculate(n,0);
        //calculate(n,1);
        //cout << vp1[M[1][2][1]].second << endl;
        
        forl(i,0,n){
             unsigned long long int a1 = vp1[i].first;
             unsigned long long int b1 = vp1[i].second;
             unsigned long long int t;
             forl(j,i,n){
                 a1 = min(a1,vp1[j].first);
                 b1 = min(b1,vp1[j].second);
                 unsigned long long int cnt = j-i+1;
                 t = a1*b1*cnt;
                 if(t >= ans){
                    ans = t;
                    w = a1;
                    h = b1;
                 }
             } 
          }
        }
        
        cout << ans << endl;
        if(w < h)
            swap(w,h);
        cout << w << " " << h << endl;
        vp1.clear();
    }
    return 0;
}

