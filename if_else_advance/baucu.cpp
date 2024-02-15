#include <bits/stdc++.h>
#define int long long
using namespace std;
int max1, a, b, c;
main(){
    cin >> a;   max1=a;
    cin >> b;   if(max1<b)  max1=b;
    cin >> c;   if(max1<c)  max1=c;
    if (c < max1){
        cout << max1-c+1;
        return 0;
    }
    cout << max1-c;
}