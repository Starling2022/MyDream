#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, a, b) for (int i=(a); i <= (b); ++i)
//KHAI BAO BIEN SU DUNG
int key, res;
const int max_value = 1e7;

int binary_search(int key){
    //bien su dung
    int left=0;
    int right=max_value-1;
    int mid = (left+right)/2;
    int a[max_value];
    //hamlogic
    FOR(i, 0, max_value)    a[i]=i;
    sort(a, a+max_value);

    while(left<=right){ //chay khi dieu kien thoa man
        if(a[mid]==key){    //neu tim thay, return
           return mid;
        }
        if(a[mid]<key)  left=mid++; //neu mid < key, left =mid+1
        if(a[mid]>key)  right=mid--; //right = mid-1;
    }
    return 0;
}
 
main(){
    ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    cin >> key;
    res=binary_search(key);
    cout << "index is: " << res << endl;
    return 0;
}
