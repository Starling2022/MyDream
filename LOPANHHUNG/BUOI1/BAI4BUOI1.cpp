#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FOR(i, a, b) for (int i=(a); i<=(b); ++i)
const int max_value = 1e7;
int prime[max_value];

int sangsonguyento(){
    FOR(i, 0, max_value)    prime[i]=1;
    FOR(i, 2, sqrt(max_value))
        if(prime[i])
            for(int j = i*i; j <= max_value; j+=i)
                prime[i]=1;
}