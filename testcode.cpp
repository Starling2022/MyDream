#include <bits/stdc++.h>
#define int long long
#define FOR(i, a, b) for(int i=(a); i<=(b);++i)
#define FOD(i, a, b) for(int i=(a); i>=(b);--i)
#define REP(n) for(int i=0; i<=(n);++i)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FILE_IO(filein, fileout) freopen((filein), "r", stdin);freopen((fileout), "w", stdout);
using namespace std;
const int N=10000007;

long long sumOfWeight(int A[], int n) {
    long long totalWeight = 0;

    stack<int> increasingStack, decreasingStack;

    // Duyệt qua mảng để tính tổng trọng số
    for (int i = 0; i < n; ++i) {
        // Cập nhật increasing stack
        while (!increasingStack.empty() && A[i] >= A[increasingStack.top()]) {
            increasingStack.pop();
        }
        int maxIndex = (increasingStack.empty() ? -1 : increasingStack.top());
        increasingStack.push(i);

        // Cập nhật decreasing stack
        while (!decreasingStack.empty() && A[i] <= A[decreasingStack.top()]) {
            decreasingStack.pop();
        }
        int minIndex = (decreasingStack.empty() ? -1 : decreasingStack.top());
        decreasingStack.push(i);

        // Tính trọng số của dãy con bắt đầu từ minIndex và kết thúc tại maxIndex
        totalWeight += (long long)A[i] * (i - minIndex) * (maxIndex - i);
    }

    return totalWeight;
}

int32_t main() {
    int A[] = {1, 2, 3};
    int n = sizeof(A) / sizeof(A[0]);

    cout << "Tong trong so cua tat ca cac day con: " << sumOfWeight(A, n) << endl;

    return 0;
}
