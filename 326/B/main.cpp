
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
#define N 1000001
bool mark [N];
vector <unsigned long long int> primeList;
vector <int> factors [1000 + 10];

void sieve ()
{
	unsigned long int i,j;

	memset (mark, true, sizeof (mark));

	mark [0] = mark [1] = false;

	for (i = 4; i < N; i += 2 ) mark [i] = false;

	for (  i = 3; i * i <= N; i += 2 ) {
		if ( mark [i] ) {
			for ( j = i * i; j < N; j += 2 * i ) mark [j] = false;
		}
	}

	primeList.clear ();
	primeList.push_back (2);

	for (  i = 3; i < N; i += 2 )
	{
		if(mark [i]) primeList.push_back (i);
	}

}
int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    unsigned long long int n,a,b,i,j;
    int k;
    vector<unsigned long long int> v;
    sieve();
    while(cin >> n){
            v.clear();
        for(i = 1;i*i <= n;i++){
            if(n%i == 0){
                v.pb(i);
                j = n/i;
                if(i != j)
                v.pb(n/i);
            }
        }
        sort(all(v));
        int sz = v.size();
        int psz = primeList.size();
        for(k = sz-1;k>=0;k--){
             a = v[k];
             bool ok=true;
            for(i = 0;i<psz && primeList[i]*primeList[i] <= a;i++){
                int cnt =0;
                while(a%primeList[i] == 0){
                    a /= primeList[i];
                    cnt++;
                }
                if(cnt >= 2){
                    //cout << v[k] << endl;
                    ok=false;
                    break;
                }
            }
            if(ok){
                cout << v[k] << endl;
                break;
            }
        } 
           
    }
    return 0;
}
