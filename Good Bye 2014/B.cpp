
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

string to_string(long long x) { stringstream ss; ss << x; return ss.str(); }
long long to_int(const string &s) { stringstream ss; ss << s; long long x; ss >> x; return x; }

char A[301][301];
int p[301];
int n;
bool no_touch[301];

int find_pos(int i)
{
	int j;
	//cout << i << endl;
	forl(j,0,n)
	{
		//cout << j << " " << p[j] << endl;
		if(p[j] == i)
		return j;
	}
}

int main(void)
{
    //freopen("1.txt", "r", stdin);
    //freopen("2.txt", "w", stdout);
    
    
    int i,j,k;
    while(cin >> n)
    {
    	forl(i,0,n)
    	{
    		cin >> p[i];
    	}
    	getchar();
    	forl(i,0,n)
    	{
    		gets(A[i]);
    	}
    	
    	ms(no_touch,false);
    	
    	forl(i,1,n+1)
    	{
    		int pos = find_pos(i);	
    		//if(i == 1)
    		//cout << ".." <<pos << endl;
    		//if(pos <= i-1)
    		//continue;	
			
			while(true)
			{
				bool ch=false;
				forl(j,0,pos)
				{
					//cout << no_touch[j] << endl;
					if(A[j][pos] == '1' && p[j] > p[pos] && no_touch[j]==false)
					{
						swap(p[j],p[pos]);
						ch = true;
						//cout << pos+1 << " " << j +1<< endl;
						pos = j;
						
						break;
						
						//cout << "here\n";
					}
				} 
				if(ch == false)
				break;
			}
    		
    		no_touch[pos] = true;
    	}
    	
    	cout << p[0];
    	forl(i,1,n)
    	cout << " " << p[i];
    	cout << endl;
    }
    return 0;
}

