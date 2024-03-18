#include <bits/stdc++.h>
#define int long long
#define FOR(i,a,b) for(int i = (a); i <= (b); ++i)
#define FOD(i,a,b) for(int i = (a); i >= (b); --i)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file(in, out) freopen(in, "r", stdin);freopen(out, "w", stdout);
const int N = 10000007;
using namespace std;

int n, value;

int S_UOC(int x){
    int sum_val=0;
    FOR(i,1,sqrt(x))
        if(x%i==0){
            sum_val+=i;
            if(i != x/i){
                sum_val+=x/i;
                //cout << x/i << endl;
            }
            //cout << i << endl;
        }
    return sum_val;
}

int32_t main(void){
    FAST;
    //file("GHH.INP", "GHH.OUT");   //Bỏ // nếu muốn chạy bằng file;
    cin >> n;
    FOR(i,1,n){
        cin >> value;
        if(value*2 <= S_UOC(value))
            cout << "1 \n";
        else
            cout << "0 \n";
    }
}