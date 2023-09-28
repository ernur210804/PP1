#include <iostream>

using namespace std;

int main()
{
    int n, r, l, tmp;
    long long sum = 0;

    cin >> n >> l >> r;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        arr[i] = tmp;
    }
    for (int i = 0; i < n; i++) {
        if((l <= i+1) && (i+1 <= r)) {
            sum+=arr[i];
        }
    }
    cout << sum;
    
    return 0;
}
/*#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long  n,l,r,a;
    a=0;
    long long arr[n];
    cin>>n>>l>>r;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=l-1;i<r;i++){
          a=a+arr[i];
            
            
        }
    cout<<a;
}
 */