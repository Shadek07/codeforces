
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

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int n,i,j,k;
    char in[1001];
    int len,digit;
    int leng[1001];
    char ans[1001];
    while(cin >> n)
    {
    	getchar();
    	gets(in);
    	
    	ans[0] = 'z';
    	ans[1] = '\0';
    	int i1;
		forl(i1,0,n)
		{
			
			int d = in[i1] - '0';
			//cout << i1 << endl;
			//cout << ind << " " << d << endl;
			char in1[1001];
			strcpy(in1,in);
			if(d != 0)
			{
				k = 10 - d;
				forl(i,0,n)
				{
					j = in1[i]-'0';
					j = (j+k)%10;
					in1[i] = (j+'0');
				}
			}
			
			
			char in2[1001];
			int i2=0;
			forl(i,i1,n)
			{
				in2[i2++] =  in1[i];
			}
			forl(i,0,i1)
			{
				in2[i2++] =  in1[i];
			}
			in2[i2] = '\0';
			if(strcmp(in2,ans)<0)
			  strcpy(ans,in2);
		}
				
		cout << ans << endl;
    }
    
    return 0;
}
