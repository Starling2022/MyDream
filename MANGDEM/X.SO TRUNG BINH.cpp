/*
Cho một dãy gồm n số nguyên dương a1, a2, ..., an đôi một khác nhau. Phần tử ak (1 ≤ k ≤ n) 
được gọi là phần tử trung bình cộng nếu tồn tại ít nhất một cặp chỉ số i, j(1 ≤ i < j ≤ n) sao cho: ak = (ai + aj) / 2 (chia hết không dư)
Yêu cầu: Hãy đếm số lượng phần tử trung bình cộng có trong dãy, nếu không có thì in ra 0.
Input
Dòng đầu ghi số nguyên dương n là số phần tử của dãy
Dòng tiếp theo ghi n số nguyên dương a1, a2, ..., an
Output
Ghi ra một số nguyên duy nhất là số lượng phần tử trung bình cộng có trong dãy.
Scoring
Có 30% số điểm ứng với các test với N ≤ 400, 1 ≤ ai ≤ 2.104
Có 20% số điểm ứng với các test với N ≤ 3000, 1 ≤ ai ≤ 2.104
Có 20% số điểm ứng với các test với N ≤ 400, 1 ≤ ai ≤ 109
Có 30% số điểm ứng với các test với N ≤ 50000, 1 ≤ ai ≤ 5.103 và các số không nhất thiết khác nhau từng đôi một
ex: (TLE: 1s)
input: 4 
1 2 3 4
ouput: 2
*/
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
    int n;
    cin >> n;
    int a[n];
    unordered_map <int, int> COUNT;
 
    //type là chia thành dạng bài các số có đôi một khác nhau hay không?
    //1 : là dãy số đôi một khác nhau (subtest 1, 2, 3)
    //0 : là dãy số không nhất thiết đôi một khác nhau (subtest 4)
    bool type = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ++COUNT[a[i]];
 
        if (COUNT[a[i]] >= 2)
            type = 0;
    }
    int ans = 0, avg;
    //subtest 1, 2, 3
    if (type == 1) {
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++) {
                avg = (a[i] + a[j]) / 2;
                if((a[i] + a[j]) % 2 != 0)   continue;
                else if ((a[i] + a[j]) % 2 == 0 && COUNT[avg]) {
                    ++ans;
                    COUNT[avg] = 0;
                }
            }
    }
    //subtest 4
    else {
        set <int> s;
        for (int i = 0; i < 5001; i++) {
            if (COUNT[i] >= 2) s.insert(i);
 
            for (int j = i + 1; j < 5001; j++)
                if (COUNT[i] && COUNT[j] && (i + j) % 2 == 0)
                    s.insert((i + j) / 2);
 
        }
 
        for (int i : s)
            ans += COUNT[i];
    }

    cout << ans << "\n";
    return 0;
}