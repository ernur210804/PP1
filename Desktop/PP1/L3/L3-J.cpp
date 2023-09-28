#include <iostream>

using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            cout << i + 1;
            break;
        }
        else if(arr[i] > target){
            cout << i;
            break;
        }
        else if(i == n-1){
            cout << n;
        }
    }
    return 0;
}