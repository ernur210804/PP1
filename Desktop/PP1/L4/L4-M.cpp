#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            a[i][j] = 0;
        }
    }

    int dx = 1, dy = 0; // -1 0 1;
    int x = -1, y = 0;
    int cnt = 1;
    while(cnt <= n * n) {
        if((0 <= x + dx && x + dx < n) && (0 <= y + dy && y + dy < n) && (a[y+dy][x+dx] == 0)) {
            y += dy;
            x += dx;
            a[y][x] = cnt;
            cnt++;
        } else {
            if(dx == 1) {
                dx = 0;
                dy = 1;
            } else if(dy == 1) {
                dx = -1;
                dy = 0;
            } else if(dx == -1) {
                dx = 0;
                dy = -1;
            } else if(dy == -1) {
                dx = 1;
                dy = 0;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}