#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n ;
    cin >> n;
    while(n != 0){
        cout << n << " ";
        if(n==1) break;
        n = (n%2 == 1)? ((n*3) + 1) : n/2;
    }
}