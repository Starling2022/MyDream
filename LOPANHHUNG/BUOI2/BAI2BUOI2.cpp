#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for(int i = (a); i <= (b); ++i)
#define FOD(i, a, b) for(int i = (a); i >= (b); --i)
#define ll long long
const int N = 50005;
const int MOD = 1000000007;
const ll MM = (ll)MOD * MOD;

ll H[N], R[N], power[N];
char s[N];
int n;

int getHash(int i, int j) {
    return (H[j] - H[i - 1] * power[j - i + 1] + MM) % MOD;
}

int getRash(int i, int j) {
    return (R[i] - R[j + 1] * power[j - i + 1] + MM) % MOD;
}

bool isPalin(int i, int j) {
    return getHash(i, j) == getRash(i, j);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> (s + 1);
    FOR(i, 1, n) H[i] = (H[i - 1] * 26 + s[i] - 'a') % MOD;
    FOD(i, n, 1) R[i] = (R[i + 1] * 26 + s[i] - 'a') % MOD;
    power[0] = 1;
    FOR(i, 1, n) power[i] = power[i - 1] * 26 % MOD;
    int ans = 0;
    FOR(i, 1, n) {
        int l = 0, r = min(i, n - i);
        while (l <= r) {
            int mid = l + r >> 1;
            if (isPalin(i - mid + 1, i + mid))
                ans = max(ans, mid << 1), l = mid + 1;
            else
                r = mid - 1;
        }
        l = 0, r = min(i - 1, n - i);
        while (l <= r) {
            int mid = l + r >> 1;
            if (isPalin(i - mid, i + mid))
                ans = max(ans, mid << 1 | 1), l = mid + 1;
            else
                r = mid - 1;
        }
    }
    cout << ans << "\n";
    return 0;
}