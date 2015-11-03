
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

bool isPalin(string s)
{
    int n = s.size();
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    string s;
    int i,j,k;
    while(cin >> s)
    {
        cin >> k;
        bool ok=true;
        int n = s.size();
        if(n%k != 0)
        {
            cout << "NO\n";
            continue;
        }
        int per = n/k;
        for(i = 0;i+per<=n;i+=per)
        {
            string s1 = s.substr(i,per);
            if(!isPalin(s1))
            {
                ok = false;
                break;
            }
        }
        if(ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

