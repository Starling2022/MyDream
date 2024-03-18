#include <bits/stdc++.h>
#define int long long
#define FOR(i, a, b) for(int i=(a); i<=(b);++i)
#define FOD(i, a, b) for(int i=(a); i>=(b);--i)
#define REP(n) for(int i=0; i<=(n);++i)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FILE_IO(filein, fileout) freopen((filein), "r", stdin);freopen((fileout), "w", stdout);
using namespace std;
const int N=10000007;

int n, cnt, h;
int prime[N];

void sangnguyento(){
    FOR(i,1,n) prime[i]=1;
    prime[1]=0;
    FOR(i,1,sqrt(n))
        if(prime[i])
            for(int j = i*i; j <= n; j+=i)
                prime[j]=0;
}

int solve(int x){
    int res=0, value=0;
    while(x > 0){
        value=x % 10;
        res+=value;
        x/=10;
    }
    return res;
}

int32_t main(void){
    FAST;
    //FILE_IO("DOCAO.INP", "DOCAO.OUT");    //Bỏ // nếu muốn chạy bằng file;
    cin >> n >> h;
    sangnguyento();
    FOR(i,1,n)
        if(prime[i])
            if(solve(i)==h){
                ++cnt;
                cout << i << "\n";
            }
    cout << cnt;
}