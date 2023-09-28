#include <bits/stdc++.h>

using namespace std;

string s = "";

string toBin(int n){
    if(n == 0){
        reverse(s.begin(), s.end()); // "1000"
        return s;
    }
    s += char(n % 2 + 48); // "0001"
    return toBin(n/2); // 8 / 2 = 4 / 2 = 2 / 2 = 1 / 2 = 0     
} 

int main(){
    int n;
    cin >> n; // 8
    cout << toBin(n); // 0001
}