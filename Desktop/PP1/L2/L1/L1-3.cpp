#include <iostream>
#include <bitset>
#include <algorithm>
#include <string>
using namespace std;
int main(){
  int a;
  cin>>a;
  auto i = bitset<4>(a);
  auto str=i.to_string();

  reverse(str.begin(),str.end());
  auto y=bitset<4>(str);
  cout<<(int)(y.to_ulong());  
} 