#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main(){
    int k;
    cin >> k;
    lli result = 1;
    while(k--){
        result = (result*2)%1000000007;
    }
    cout << result;
}