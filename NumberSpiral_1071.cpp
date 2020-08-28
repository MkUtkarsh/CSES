#include<bits/stdc++.h>
using namespace std;

#define lli unsigned long long int

int main(){
    int t;
    cin >> t;
    while(t--){
        lli r,c;
        cin >> r >> c;
        lli maxi = max(r,c);
        lli f = maxi * (maxi-1) + 1;
        f += (maxi%2 == 1)? -1*(r-c):(r-c);   
        cout << f << endl;
    }
}