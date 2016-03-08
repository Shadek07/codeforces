
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

#define MAX 100005
#define INF 9999999

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    
    int n;
    while(cin >> n){
        int i,a;
       
         int cnt[1001];
         ms(cnt,0);
         int mn=100000;
         int mx = 0;
        forl(i,0,n){
            cin >> a;
            cnt[a]++;
            mn = min(mn,a);
            mx = max(mx,a);
        }
        int curr=mn;
        int ans=0;
        cnt[curr]--;
        while(true){
            bool found=false;
            for(i = curr+1;i<=mx;i++){
                if(cnt[i]){
                    ans++;
                    curr = i;
                    cnt[i]--;
                    found = true;
                }
            }
            if(!found)
                break;
            bool b = false;
            for(i = mn;i<curr;i++){
                if(cnt[i]){
                    curr = i;
                    cnt[i]--;
                    b = true;
                    break;
                }
            }
            if(!b)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}
