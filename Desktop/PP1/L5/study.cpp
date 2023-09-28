#include <iostream>
using namespace std;

int main () {
    int n, index_i, index_j;
    cin >> n; 
    int a[n][n];
    int i = 0;
    int j = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int max = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) {
                a[i][j] == max;
                index_i = i+1;
                index_j = j+1;
            }
        }
    }
    cout << index_i << " " << index_j;
    return 0;
}