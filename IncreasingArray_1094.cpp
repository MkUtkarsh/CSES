#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    ll res = 0;
    for(int i=1;i<n;i++){
        if(ar[i-1]>ar[i]){
            res += (ll)ar[i-1] - (ll)ar[i];
            ar[i] = ar[i-1];
        }
    }
    cout << res;
}