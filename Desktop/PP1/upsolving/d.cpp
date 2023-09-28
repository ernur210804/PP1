#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, maxi = 0;
    cin >> n;
    int arr[n];
    int arr1[n];
    for(int i =  0; i < n; i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
 {  
  for(int j=i+1;j<n;j++)
  {
   if(arr[i]<arr[j])
   {
    int temp  = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
  }
 }
 
    for(int i =  0; i < n; i++){
        arr1[i] = 1;
    }
    
    for(int i =  0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]) arr1[i]++;
        }

    }
    for(int i =  0; i < n; i++){
        maxi = max(arr1[i], maxi);
    }
    for(int i =  0; i < n; i++){
        if(arr1[i] == maxi) cout << arr[i] << ' ';
    }

}