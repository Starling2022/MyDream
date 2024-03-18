#include <bits/stdc++.h>
#define int long long
#define FOR(i, a, b) for(int i=(a); i<=(b);++i)
#define FOD(i, a, b) for(int i=(a); i>=(b);--i)
#define REP(n) for(int i=0; i<=(n);++i)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FILE_IO(filein, fileout) freopen((filein), "r", stdin);freopen((fileout), "w", stdout);
using namespace std;
const int N=10000007;

struct point{    //dung cau truc de tao mang tuong tu mang pair
    int x,y;
};

point a[N], cnt[N];
int res, n;
int32_t main(){
    cin >> n;
    FOR(i,1,n){
        cin >> a[i].x >> a[i].y;
        cnt[a[i].x].x++;
        cnt[a[i].y].y++;
    }
    FOR(i,1,n)
        res=res + ( cnt[a[i].x].x - 1) * (cnt[a[i].y].y - 1);
    cout << res;
}
