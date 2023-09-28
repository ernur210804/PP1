#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        while(x%10 == 0){
            x/=10;
        }
        a[i]= x;
    }
    int mid = n/2;
    for(int i=mid; i<n; i++){
        int to_rev = a[i];
        int cnt = -1;
        while(to_rev > 0){
            to_rev /= 10;
            cnt++;
        }
        int sum = 0;
        while(a[i]>0){
            sum += a[i] % 10 * pow(10,cnt);
            cnt--;
            a[i] /= 10;
        }
        a[i] = sum;
    } 
    int l=0, r = n-1;
    
    while(l<r){
        if(a[l] != a[r]){
            cout << "NO";
            return 0;
        }
        l++;
        r--;
    }
    cout << "YES";
    }