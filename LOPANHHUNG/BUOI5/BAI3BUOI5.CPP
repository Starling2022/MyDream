#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define FOR(i, a, b) for(int i = (a); i <= (b); ++i)
#define FOD(i, a, b) for(int i = (a); i >= (b); --i)
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define int long long
//KHAI BAO CAC BIEN SU DUNG
int n, res = 0, avg;
bool check=1;
unordered_map<int, int> cnt;

int main() {
    FAST;
    cin >> n; int a[n];
    FOR(i, 0, n - 1) {  //Nhap du lieu va kiem tra subtask
        cin >> a[i];
        ++cnt[a[i]];
        if (cnt[a[i]] >= 2) check = 0;
    }
    if (check == 1) {    //subtask 1-3
        FOR(i, 0, n - 1)
            FOR(j, i + 1, n - 1) {
                avg = (a[i] + a[j]) / 2;
                if ((a[i] + a[j]) % 2 != 0) continue;
                else if ((a[i] + a[j]) % 2 == 0 && cnt[avg]) {
                    ++res;
                    cnt[avg] = 0;
                }
            }
    }
    else {  //subtask 4
        set<int> s;
        FOR(i, 0, 5000) {
            if (cnt[i] >= 2) s.insert(i);
            FOR(j, i + 1, 5000)
                if (cnt[i] && cnt[j] && (i + j) % 2 == 0)
                    s.insert((i + j) / 2);
        }
        for (int i : s) res += cnt[i];
    }
    cout << res << "\n";
}