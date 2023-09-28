#include <iostream>
using namespace std;

void r(int n,int a[], int b[], int i) {
    i = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    for (i = n - 1; i >= 0; i--)
    {
        cout << b[i] << " ";
    }
}
int main(){
    int n, i = 0;
    cin >> n;
    int a[n], b[n];
    r (n, a, b, i);
    return 0;
}