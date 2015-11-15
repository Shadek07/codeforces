    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    #include <map>
    using namespace std;
    #define MAX 100001
    unsigned base[(MAX/64)+1];
    #define ull unsigned long long int
    #define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
    #define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))
    int *arr;
    void sieve()
    {
        unsigned i, j, k;
        for(i=3; i*i<MAX; i+=2)
            if(!chkC(base, i))
                for(j=i*i, k=i<<1; j<MAX; j+=k)
                    setC(base, j);     
        //if(!chkC(base, i))      
    }
     
    void sieve_phi(){
       /* int i,j;
        
        for(i = 1; i<MAX; i++){
            phi[i] = i;
        }
        for(i = 2; i<MAX;i++){
            if(i == 2 || !chkC(base, i)){
                for(j=i;j<MAX;j += i){
                    phi[j] -= phi[j]/i;
                }
            }
        }*/
        arr = new int[MAX];
        int i,j;
        arr[1] = 1;
        for (i = 2; i < MAX; i++) {
            if (arr[i] == 0) {
                arr[i] = i - 1;
                for (j =(i<<1); j < MAX; j += i) {
                    if (arr[j] == 0) {
                        arr[j] = j;
                    }
                    arr[j] -= arr[j]/i;
                }
            }
        }
    }
     
    int main() {
        int t;
        unsigned long long int n;
        unsigned long long int i,j,k;
        unsigned long long int ans;
        unsigned long long int *out;
        out = new unsigned long long int[MAX];
        
        sieve();
        int cnt=1;
        /*for(i=3;i<MAX;i++){
            if(!chkC(base, i)){
                cnt++;
            }
        }
        cout << cnt << endl;*/
        sieve_phi();
        scanf("%d",&t);
        for(i=1;i<MAX;i++){
            unsigned long long int tmp1 = arr[i];
            tmp1 *= i;
            out[i] = tmp1;
        }
        for(i=2;i<MAX;i++){
            k=1;
            for(j=i;j<MAX;j+=i){
                //k = j/i;   
                unsigned long long int tmp = arr[k];
                tmp *= k;
                out[j] += tmp;
                k++;
            }
        }
        while(t--){
            scanf("%llu",&n);
            if(n == 1){
                cout << 1 << endl;
                continue;
            }
            else if(n == 2){
                cout << 3 << endl;
                continue;
            }
            //ans=0;
            /*double srt = n;
            srt = sqrt(srt);
            unsigned long long int limit = (unsigned long long int) srt;
            for(i = 1; i <= limit;i++){
                if(n%i == 0){
                    j = n/i;
                    ans += arr[j]*(j);
                    if(j != i){
                        ans += arr[i]*(i);
                    }
                }
            }*/
            if(n&1 && !chkC(base, n)){ //if prime
                ans = n*(n-1) + 1;
                printf("%llu\n",ans);
                continue;
            }
            printf("%llu\n",out[n]);
        }
        return 0;
     
    }
     
