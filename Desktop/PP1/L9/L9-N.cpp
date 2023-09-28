#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    map<int, int> m;
    map<int, int> m_s;
    int cnt = 0;
    for (int i = 1; i < n + 1; ++i) {
        int a;
        cin >> a;
        m[i] = a;
        m_s[a] = i;
    }
     for (int i = 1; i < n; i++) {
        for (int j = i+1; j < n + 1; j++){
            if(m_s.count(m[i]^m[j]) > 0)
                cnt++;
        }
    }
    
    cout << cnt;
    return 0;
}
/*
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> v1;
    for(int i=1;i<=n;++i){
       cin>>v[i];
    }
    for(int i=1;i<=n-1;++i){
        for(int j=i+1;j<=n;++j){

            int k=v[i],l=v[j];
            int h=k^l;
           
            v1.push_back(h);
            
        }
    }
    int cnt=0;
    vector<int> :: iterator it2=v1.begin();
        while(it2!=v1.end()){
            for(int i=1;i<=n;++i){
                if(v[i]==*it2){
                 cnt++;
            } 
            }

            it2++;
    }
    cout<<cnt;
  
}
*/

