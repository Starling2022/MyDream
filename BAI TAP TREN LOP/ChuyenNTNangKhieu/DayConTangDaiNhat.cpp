/* COPYRIGHT BY HLONG:>*/
#include <bits/stdc++.h>
#define int long long
#define FOR(i, a, b) for(int i=(a); i<=(b);++i)
#define FOD(i, a, b) for(int i=(a); i>=(b);--i)
#define REP(n) for(int i=0; i<=(n);++i)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
//KHAI BAO CAC BIEN VA HANG SU DUNG
const int N=10000007;
int n, k, x, y, max_value, value, sum_test;
int a[N], start_res[N], end_res[N];


//10 3
//1 1 8 4 4 6 3 1 8 7

void input(){
    cin >> n >> k;
    FOR(i, 1, n)    cin >> a[i];
}

void solution(){
    FOR(i, 1, k)    value+=a[i];
    x=1, max_value=value;
    FOR(i, k+1, n){
        value=value-a[i-k]+a[i];
        //cout << "Sub:" << x << " value:" << value << " max_value_sub-1:" << max_value << " || Fisrt:" << i-k << "  End:" << i << "\n";
        if(max_value<=value){
            max_value=value;
            start_res[x]=i-k+1;
            end_res[x]=i;
            //cout << "SUB:" << x << " start:" << start_res[x] << " || end:" << end_res[x] << "\n";
            ++x;
        }
    }
    --x;
    //cout << "END TASK 1 && " << "start_res:" << start_res[x] << "end_res: " << end_res[x] << "x=" << x << endl;
    while(x>0){
        FOR(i, start_res[x], end_res[x])    sum_test+=a[i];
        if(sum_test==max_value)
            FOR(i, start_res[x], end_res[x])    cout << a[i] << " ";
        cout << endl;
        --x; sum_test=0;
        //cout << x << endl;
    }
}

int32_t main(){
    input();
    solution();
}
