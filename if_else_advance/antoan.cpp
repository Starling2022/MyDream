#include <bits/stdc++.h>
using namespace std;
#define int long long
int a, b, c, k;
main() {
    cin >> a >> b >> c;
    if ((a <= b && a >= c) || (a >= b && a <= c)) {
        k = a;
    } else if ((b <= a && b >= c) || (b >= a && b <= c)) {
        k = b;
    } else {
        k = c;
    }
    cout << k << endl;
}
