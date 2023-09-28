#include <iostream>
using namespace std;
int main(){
    long long n;
    int l, r;
    cin >> n >> l >> r;
    int a[n];
    for (int i = 0; i <n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < l-1; i++){
        cout << a[i] << " ";
    }
    for (int i = r-1; i>=l-1;--i){
        cout << a[i] <<" ";
    }
    for(int i = r; i<n; i++){
        cout << a[i] << " ";
    }
}
   
   
    /*
    #include <iostream>
#include <cmath>
 using namespace std;
 int main(){
    int n,l,r,i,a;
    cin>>n>>l>>r;
    int  arr[n];
    for( i=0;i<n;i++){
        cin>>arr[i];
        
    }
    for(i=0;i<l-1;i++){
        cout<<arr[i]<<" ";    
        }

   
    for(i=r-1;i>=l-1;i--){
        
       cout<<arr[i]<<" ";

    }
    for(i=r;i<n;i++){
    cout<< arr[i];
    }
    }
    */
    
 