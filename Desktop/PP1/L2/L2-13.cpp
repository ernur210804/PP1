#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;
    int main(){
        int a,b,c;
        cin>>a>>b;
        bitset<8> b1= a;
        bitset<8> b2= b;
        bitset<8>b3 =b1 &b2;
        
        cout<<(int)(b3.to_ulong());
        

    }