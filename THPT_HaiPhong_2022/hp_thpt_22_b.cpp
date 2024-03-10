#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, a, b) for(int i=(a); i <= (b); ++i)
#define FOD(i, a, b) for(int i=(a); i >= (b); --i)
#define file(in, out) freopen(in, "r", stdin);freopen(out, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1000006;

int n;
string a[N];
bool cmp(string &a, string &b)
{
    return (a+b>b+a);
}
int32_t main(void){
    FAST_IO; 
    cin >> n;
    FOR(i, 1, n)    cin >> a[i];
   sort(a + 1, a+n+1,cmp);
   FOR(i, 1, n)    cout<<a[i];
}
