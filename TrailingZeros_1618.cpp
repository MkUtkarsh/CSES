#include<bits/stdc++.h>
using namespace std;

int intlog(double base, double x) {
    return (int)(log(x) / log(base));
}

int main(){
    int x,n,result = 0;
    cin >> n;
    x = intlog(5,n);
    int z = x;
   // cout << n/(pow(5,1)) << endl;
    while(x--){
        result += n/(pow(5,z--));
    }
    cout << result;
}