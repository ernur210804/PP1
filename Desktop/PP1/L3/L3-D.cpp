#include<iostream> 
 
using namespace std; 
 
int main() { 
    int n, max, i=0, b; 
    cin >> n;  
    long long int a[n];  
 
    for (int i=0; i<n; i++) { 
        cin >> a[i]; 
    } 
 
     if(n==1) { 
        b=1; 
        cout << b; 
        return 0; 
     } 
 
     max = a[0]; 
     for (int i=0; i < n; i++) { 
        
      if (max < a[i]) { 
        max = a[i]; 
        b=i; 
      } 
     } 
     b++; 
      cout << b;  
     
}