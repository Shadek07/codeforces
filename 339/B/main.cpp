
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
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

string to_string(long long x) { stringstream ss; ss << x; return ss.str(); }
long long to_int(const string &s) { stringstream ss; ss << s; long long x; ss >> x; return x; }

#define MAX 100005
#define INF 9999999

bool isBeautiful(char in[MAX], int len){
    int oneCount=0;
    int otherCount=0;
    while(len){
        int d = in[len-1] - '0';
        if(d==1)
            oneCount++;
        if(d>1){
            otherCount++;
        }
        len--;
    }
    if(oneCount>1)
        return false;
    if(otherCount>0)
        return false;
    return true;
}
int getZeroCount(int a){
    int cnt=0;
    while(a){
        cnt++;
        a /= 10;
    }
    return cnt-1;
}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n;
    int i,j,k;
    int a,b;
    char in[MAX];
    char other[MAX];
    //cout << sizeof(double) << endl;
   
    while(cin >> n){
        int zeroCount=0;
        
        bool isZero=false;
        int len;
        strcpy(other, "-");
        forl(i,0,n){
            scanf("%s",&in);
            len = strlen(in);
            if(len == 1 && in[0] == '0'){
                isZero = true;
                continue;
            }
            if(isBeautiful(in,len)){
                zeroCount += len-1;
            }
            else{
                strcpy(other,in);
            }
        }
        if(isZero){
            cout << 0 << endl;
            continue;
        }
        if(strcmp(other, "-") != 0){
            cout << other;
        }
        else{
            cout << 1;
        }
        forl(i,0,zeroCount){
            cout << 0;
        }
        cout << endl;
    }
    return 0;
}
