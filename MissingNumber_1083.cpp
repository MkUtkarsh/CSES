#include<iostream>
using namespace std;
 
typedef long long ll;
int main(){
    ll sum1 = 0; 
    ll n;
    cin >> n;
    int k = 0;
    int arr[n-1];
    while(k != (n-1)){ cin >> arr[k];sum1 += arr[k];k++;}
    
   ll sum = (ll(n) * (n+1)/2) - sum1;
    cout << sum;
}