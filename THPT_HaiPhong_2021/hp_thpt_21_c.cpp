#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll>
#define pb push_back
#define fi first
#define se second
#define ii pair<int ,int>
#define PI 3.141592653589793238462643383279502884

const ll maxN = 3e5;
const ll maxx = 1e9 + 5;

using namespace std;

ll n, a[maxN], ok = 0, k, b[maxN];
map<ll, vl> mp;

ll timkiem(ll a[], ll n, ll k) {
    ll l = 1, r = n;
    bool ok = false;
    while (l <= r) {
        ll m = (l + r) / 2;
        if (a[m] == k) {
            ok = true;
            return a[m];
        }
        else if (a[m] < k)
            l = m + 1;
        else
            r = m - 1;
    }
    if (ok == false)
        return maxx;
}

int main() {
    cin.tie() -> ios_base::sync_with_stdio(0);
    cin >> n >> k;
    k = 2 * k;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i];
        mp[a[i]].push_back(i);
    }
    
    sort(a + 1, a + n + 1);
    
    for (int i = 1; i <= n; i++) {
        long long kq = timkiem(a, n, k - b[i]);
        if (kq != maxx) {
            for (int j = 0; j < mp[kq].size(); j++) {
                if (mp[kq][j] != i) {
                    ok = 1;
                    cout << i << " ";
                    cout << mp[kq][j];
                    return 0;
                }
            }
        }
    }
    
    if (ok == 0) {
        cout << 0 << " " << 0;
    }
    
    return 0;
}
