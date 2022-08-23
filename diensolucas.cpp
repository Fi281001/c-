#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main() {
    int n;
    cin >> n;
    long long L[n + 2];
    L[0] = 2;
    L[1] = 1;
    for(int i = 2; i <= n; i++) {
        L[i] = L[i-1] + L[i-2];
    }
    for(int i = 0; i <= n; i++) {
        cout << L[i] << " ";
    }
    return 0;
}
