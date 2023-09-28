#include <iostream>
using namespace std;

int main() {
    int n;
    string g = "*", p = ".";
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for(int j = 0; j < 2 * n - 1; j++){
           // if (true);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2*n - 1; j++){
            if (i + j >= n - 1 && j - i <= n - 1){
                cout << g;
            }
            else {
                cout << p;
            }
        }cout << endl;
    }
    return 0;
}