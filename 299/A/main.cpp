
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

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    char in[10][23] = {"","ten","twenty", "thirty", "forty", "fifty","sixty","seventy","eighty","ninety" };
    char in2[10][23] = {"","one", "two", "three","four","five","six","seven","eight","nine"};
    int s;
    while(cin >> s)
    {
        if(s == 0)
        {
            cout << "zero\n";continue;           
        }
        if(s < 10)
        {
            cout << in2[s] << endl;
            continue;
        }
        if(s < 20)
        {
            if(s == 10) cout << "ten\n";
            else if(s == 11) cout << "eleven\n";
            else if(s == 12) cout << "twelve\n";
            else if(s == 13) cout << "thirteen\n";
            else if(s == 14) cout << "fourteen\n";
            else if(s == 15) cout << "fifteen\n";
            else if(s == 16) cout << "sixteen\n";
            else if(s == 17) cout << "seventeen\n";
            else if(s == 18) cout << "eighteen\n";
            else if(s == 19) cout << "nineteen\n";
            continue;              
        }
        else
        {
            int a = s/10;
            int b = s%10;
            cout << in[a];
            if(b>0)
                cout << "-" << in2[b];
            cout << endl;
        }
    }
    return 0;
}
