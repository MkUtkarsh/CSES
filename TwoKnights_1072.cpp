#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main(){
    int n;
    cin >> n;
    for(lli i=1;i<=n;i++){
        if(i == 1) cout << 0 << endl;
        else cout << (i*i)*(i*i-1)/2 - 4*(i-1)*(i-2) << endl; 
    }
}