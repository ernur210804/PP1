#include <bits/stdc++.h>
using namespace std;
int main () {
   int n;
   int cnt=0;
   cin >> n;
   map <string ,int> mp;
   for (int i=0; i<n; i++) {
        string x;
        cin >>x;
        if (mp[x] ==0){
         mp[x] = i + 1;
        }
    }
    map<string, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it ->second << endl;
    }
   return 0;
}