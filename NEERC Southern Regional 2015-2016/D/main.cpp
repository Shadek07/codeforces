
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

#define MAX 10005

bool between(int a, int b, int c){
    if(a >= b && a <= c)
        return 1;
    return 0;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int arr[MAX][3];
    int n;
    int i,j,k;
    while(cin >> n){
        forl(i,0,n){
            scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
            if(arr[i][1] > arr[i][2]){
                swap(arr[i][1],arr[i][2]);
            }
        }
        forl(i,0,n){
            int cnt=0;
            forl(j,0,n){
                if(i != j){
                    
                    int temp[2][3];
                    forl(k,0,3){
                        temp[0][k] = arr[i][k];
                    }
                    forl(k,0,3){
                        temp[1][k] = arr[j][k];
                    }
                    
                    if(temp[0][0] > temp[1][0]){
                        forl(k,0,3){
                            swap(temp[0][k],temp[1][k]);
                        }
                    }
                    
                    int t1 = arr[i][0];
                    int t2 = arr[i][0] + abs(arr[i][1]-arr[i][2]);
                    int t3 = arr[j][0];
                    int t4 = arr[j][0] + abs(arr[j][1]-arr[j][2]);
                    int a = max(t1,t3);
                    int b = min(t2,t4);
                    bool ok = true;
                    ok &= between(t2, t3,t4);
                    ok &= between(t4,t1,t2);
                    ok &= between(arr[i][2], arr[j][1], arr[j][2]);
                    ok &= between(arr[j][2],arr[i][1], arr[i][2]);
                    if( ok){
                        cnt++;
                    }
                     
                }
            }
            if(i != 0)
                cout << " ";
            cout << cnt;
            
        }
        cout << endl;
    }
    return 0;
}

/*
if(between(a,t1,t2) && between(b,t3,t4)){
int mx = max(arr[i][1], arr[i][2]);
int mn = min(arr[j][1], arr[j][2]);
int a1 = min(arr[j][1], arr[j][2]);
int b1 = max(arr[j][1], arr[j][2]);
int a11 = min(arr[i][1], arr[i][2]);
int b11 = max(arr[i][1], arr[i][2]);
if(between(mx, a1, b1) && between(mn, a11, b11 )){
    cnt++;
}
}
*/

