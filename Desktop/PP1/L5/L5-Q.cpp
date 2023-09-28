#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    int cnt = 0;
    int found = s2.find(s1);
    while(found != string::npos){
        cnt++;
        found = s2.find(s1, found + s1.size());
    }

   // cout << cnt << endl;
    if(s1.size()*cnt!=s2.size()){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }




    return 0;
}