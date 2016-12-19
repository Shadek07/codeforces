
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

int main()
{
    int n;
    char in[300];
    int i,j;
    while(cin >> n){
        getchar();
        gets(in);
        int a=0,c=0,g=0,t=0;
        if(n%4){
            cout << "===\n";
            continue;
        }
        forl(i,0,n){
            a += in[i] == 'A';
            c += in[i] == 'C';
            g += in[i] == 'G';
            t += in[i] == 'T';
        }
        int extra = n-(a+c+g+t);
        if(a>(n/4) || c>(n/4) || g>(n/4) || t >(n/4)){
            cout << "===\n";
            continue;
        }
        forl(i,0,n){
            if(in[i] != '?'){
                cout << in[i];
            }else{
                if(a<n/4){
                    cout << "A";
                    a++;
                }else if(c<n/4){
                    cout << "C";
                    c++;
                }else if(g<n/4){
                    cout << "G";
                    g++;
                }else{
                    cout << "T";
                    t++;
                }
            }
        }
        cout << endl;
    }
    return 0;
}