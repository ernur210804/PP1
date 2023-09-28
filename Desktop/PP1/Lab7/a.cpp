#include <bits/stdc++.h>

using namespace std;

int deg(int n){  // 1
    if(n == 0) return 1;

    return 2 * deg(n-1); // 2 * 2 * 2 * 2 * 2 * deg(0) = 2^5 * 1 = 32
}

int main(){
    int n; // 5
    cin >> n;
    cout << deg(n); // deg(5)
}