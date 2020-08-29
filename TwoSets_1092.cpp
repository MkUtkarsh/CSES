#include<bits/stdc++.h>
using namespace std;
#define lli unsigned long long int

int main(){
    lli n;
    cin >> n;
    lli sum = n*(n+1)/2;
    if (sum & 1) cout << "NO";
    else{
        if(n%2 == 1){
            cout << "YES" << endl;
            int k = n/2;
            int a = k/2;
            int b = k - a;
            int i = 1;
            cout << k  << endl;
            while(a--){
                cout << i++ << " ";
            }
            int j = n;
            // cout << b << endl;
            while(b--){
                cout << j-- << " ";
            }
            cout << "\n";
            int c = k/2 + 1;
            k++;
            cout << k << endl;
            while(k--){
                cout << c++ << " ";
            }
        }
        else {
            cout << "YES" << endl;
            int k = n/2;
            int i = k/2;
            cout << k << endl;
            while(k--){
                cout << ++i <<" ";
            }
            int j = n/4;
            int l = j;
            int z = 1;
            cout << "\n";
            cout << n/2 << endl;
            while(j--){
                cout << z++ << " ";
            }
            z = n;
            while( l--){
                cout << z-- << " ";
            }
        }
    }
}