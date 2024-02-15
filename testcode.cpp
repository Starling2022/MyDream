#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define FOR(i, a, b) for(int i=(a); i<= (b); ++i)
#define FOD(i, a, b) for(int i=(a); i>=(b); --i)
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define MOD 1000000007

vector<vector<int>> multiply(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int n = A.size();
    int m = A[0].size();
    int p = B[0].size();

    vector<vector<int>> result(n, vector<int>(p, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < m; ++k) {
                result[i][j] = (result[i][j] + A[i][k] * B[k][j]) % MOD;
            }
        }
    }

    return result;
}

vector<vector<int>> power(const vector<vector<int>>& base, int exp) {
    int n = base.size();
    vector<vector<int>> result(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i) {
        result[i][i] = 1;
    }

    vector<vector<int>> temp = base;

    while (exp > 0) {
        if (exp % 2 == 1) {
            result = multiply(result, temp);
        }

        temp = multiply(temp, temp);
        exp /= 2;
    }

    return result;
}

int fibonacci(int n) {
    vector<vector<int>> base = {{1, 1}, {1, 0}};
    vector<vector<int>> result = power(base, n - 1);
    return result[0][0];
}

int32_t main(){
    FAST;
    int a, b, m;
    cin >> a >> b >> m;

    int fib_a = fibonacci(a);
    int fib_b = fibonacci(b);

    cout << __gcd(fib_a, fib_b) % m << endl;

    return 0;
}
