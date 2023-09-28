#include <iostream>
using namespace std;
int main() {
  int a;
  int b;
  int c;
  cin >> a;
  int arr[a];
    
    for (int i = 0; i < a ; i++) {
            cin >> arr[i];
        }
  b = arr[0];
  c = arr[0];
    for (int i = 0; i < a; i++) {
    if (arr[i] >= b) {
      b = arr[i];
    }
    if (arr[i] <= c){
      c = arr[i];
    }
  }
    for (int i = 0; i < a; i++) {
    if (arr[i] == b){
      arr[i] = c;
  
    }
    cout << arr[i] << ' ';
  }    
    
  return 0;
}
   
   
   
   
    /*
    #include <iostream>
#include <cmath>
 using namespace std;
    int main(){
        int n,max,min;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        max=arr[0];
        min=arr[0];
        for(int i=0;i<n;i++){

    
    

    }
    */