
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int b = 1; b <= n; b++) {
            if((n - b + 1) != i) cout << ".";
            else cout << i;
        }
        cout << endl;
    }
    return 0;
} 


/*
#include <iostream>
using namespace std;
int main(){
    int n,c;
    c=0;
    cin>>n;
    int a[n][n];
    for(int i=n;i>0;i--){
        for(int j=0;j<n;j++){
          
            if((n-j)!=i){
                cout<<".";
            }
            else {
                cout<<i;
            }
            
            
           
        }cout<<endl;
    }
   }
*/