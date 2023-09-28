#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"2 is prime"<<endl;
    for (int i =2; i <= n; i++) {
       for (int j = 2; j < i; j++) {
          if (i%j==0){
             break;
             }
          else if (i==j+1){
             cout << i << " is  prime" << endl;
            }
        }
    }
}