#include <bits/stdc++.h>
#define int long long
#define FOR(i, a, b) for(int i = (a); i <= (b); ++i)
#define FOD(i, a, b) for(int i = (a); i >= (b); --i)
using namespace std;

const int maxN = 500005;
int a[2][maxN];
int f1[maxN], f2[maxN];

void process(int H, int N) {
    int j = 1;
    FOR(i, 1, H) {
        while (j <= N / 2 && a[1][j] < i) j++;
        f1[i] = N / 2 - j + 1;
    }

    j = 1;
    FOD(i, H, 1) {
        while (j <= N / 2 && a[0][j] < (H - i + 1)) j++;
        f2[i] = N / 2 - j + 1;
    }

    int res = maxN;
    int c = 0;

    FOR(i, 1, H) {
        res = min(res, f1[i] + f2[i]);
    }

    FOR(i, 1, H) {
        if (f1[i] + f2[i] == res) {
            c++;
        }
    }

    cout << res << " " << c;
}

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, h;
    cin >> n >> h;

    FOR(i, 1, n) {
        if (i % 2 == 1) cin >> a[1][i / 2 + 1];
        else cin >> a[0][i / 2];
    }

    sort(a[0] + 1, a[0] + n / 2 + 1);
    sort(a[1] + 1, a[1] + n / 2 + 1);

    process(h, n);

    return 0;
}
