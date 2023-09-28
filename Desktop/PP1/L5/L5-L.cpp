#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s1;
    cin>>s1;

    for(int i=0;i<s1.size()-1;i++){
        
        int c=s1[i];
        int d=s1[i+1];
        if(c>d ){
            cout<<"NO";
            //cout<<c<<" "<<d<<endl;
             return 0;
        
        }

}
cout<<"YES";
}