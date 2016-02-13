
#pragma comment(linker,"/STACK:16777216")
#pragma  warning ( disable: 4786)
#include <bits/stdc++.h>

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

#define MAX 205
#define INF 9999999

map< vector<int>, int> mp;

struct state{
    vector<int> v;
};
int main()
{
    int n;
    char in[MAX];
    int i,j,k;
    while(cin >> n){
        getchar();
        gets(in);
        int b=0,g=0,r=0;
        mp.clear();
        forl(i,0,n){
            if(in[i] == 'B')
                b++;
            if(in[i] == 'G')
                g++;
            if(in[i] == 'R')
                r++;
        }
        vector<int> v,v1;
        v.pb(b);
        v.pb(g);
        v.pb(r);
        mp[v] = 1;
        bool vis[3]={false,false,false};
        queue< vector<int> > pq;
        pq.push(v);
        while(!pq.empty()){
            v = pq.front();
            pq.pop();
            if(v[0] == 1 && v[1] == 0 && v[2] == 0){
                vis[0] = true;
                continue;
            }
            if(v[1] == 1 && v[0] == 0 && v[2] == 0){
                vis[1] = true;
                continue;
            }
            if(v[2] == 1 && v[0] == 0 && v[1] == 0){
                vis[2] = true;
                continue;
            }
            forl(i,0,3){
                forl(j,i+1,3){
                    int mn = min(v[i],v[j]);
                    if(mn != 0){
                        v1 = v;
                        v1[i] -= mn;
                        v1[j] -= mn;
                        v1[3-(i+j)] += mn;
                        if(mp.count(v1) == 0){
                            pq.push(v1);
                            mp[v1] =1;
                        }
                    }
                }
            }
            forl(i,0,3){
                if(v[i] > 1){
                    v1 = v;
                    v1[i]--;
                    if(mp.count(v1) == 0){
                        mp[v1] =1;
                        pq.push(v1);
                    }
                }
            }
        }
        if(vis[0] == true)
            cout << "B";
        if(vis[1] == true)
            cout << "G";
        if(vis[2] == true)
            cout << "R";
        cout << endl;
        
    }
    return 0;
}
