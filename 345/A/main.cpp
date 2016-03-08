
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

struct state{
    int a,b;
    int m;
};
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int a,b;
    while(cin >> a >> b){
         
        /*queue<state> pq;
        state st,next;
        st.a = a;
        st.b = b;
        st.m = 0;
        int ans = 0;
        pq.push(st);
        while(!pq.empty()){
            st = pq.front();
            pq.pop();
            if(st.a == 0 || st.b == 0){
                ans = max(ans, st.m);
                continue;
            }
            if(st.a <= 1 && st.b <= 1){
                ans = max(ans,st.m);
                continue;
            }
            
            next = st;
            if(next.a >= 2){
                next.a -= 2;
            next.b += 1;
            next.m++;
            pq.push(next);
            }
            
            
            next = st;
            if(next.b >= 2){
                next.b -= 2;
            next.a += 1;
            next.m++;
            pq.push(next);
            }
            
        }
        cout << ans << endl;*/
        int an = 0;
        while(true){
            if(a==0 || b == 0){
                break;
            }
            if(a == 1 && b == 1){
                break;
            }
            if(a <= b-1){
                a++;
                b -= 2;
            }else{
                b++;
                a -= 2;
            }
            an++;
        }
        /*if(a == b && a ==1){
            cout << 0 << endl;
        }
        else if(a == 1 && b == 2){
            cout << 1 << endl;
        }
        else if(a == 2 && b == 1){
            cout << 1 << endl;
        }
        else if(a == b){
            cout << a+1 << endl;
        }
        else{
            
            cout << a+b - 2 << endl;
        }*/
        cout << an << endl;
    }
    return 0;
}
