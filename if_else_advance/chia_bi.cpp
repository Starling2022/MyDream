#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, k=2 , s;
main() {    //Em lười if else lắm rùi anh thông cảm:(
    cin >> n;
    s = (k + n - 1) % 7;
    switch (s) {
        case 0:
            cout << "CN" << endl;
            break;
        case 1:
            cout << "Thu 2" << endl;
            break;
        case 2:
            cout << "Thu 3" << endl;
            break;
        case 3:
            cout << "Thu 4" << endl;
            break;
        case 4:
            cout << "Thu 5" << endl;
            break;
        case 5:
            cout << "Thu 6" << endl;
            break;
        case 6:
            cout << "Thu 7" << endl;
            break;
    }
}
