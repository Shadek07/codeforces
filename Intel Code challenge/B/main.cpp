
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

#define MAX 105
int arr[MAX];
map<char,int> mp;
int getVowelCount(string s){
     int n = s.size();
     int i;
     int cnt=0;
     forl(i,0,n){
         if(mp[s[i] ])
            cnt++;
     }
     return cnt;

}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int i,j,k;
    int n;
    char in[MAX];
    mp['a'] = 1;
    mp['e'] = 1;
    mp['i'] = 1;
    mp['o'] = 1;
    mp['u'] = 1;
    mp['y'] = 1;
    while(cin >> n){
        forl(i,0,n){
            cin >> arr[i];
        }
        getchar();
        bool ok=true;
        forl(i,0,n){
            gets(in);
            if(ok==false)
                continue;
            string s = in;
            istringstream ss(s);
            string token;
            bool atLeast=0;
            int syl=0;
            while(getline(ss, token, ' ')) {
                syl += getVowelCount(token);
                atLeast += syl>0;
            }
            if(!( arr[i] == syl)){
                ok=false;
            }
        }
        if(ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
