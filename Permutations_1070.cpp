#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << 1;
        break;
    case 2:
        cout << "NO SOLUTION";
        break;
    case 3:
        cout << "NO SOLUTION";
        break;
    case 4:
        cout << "3 1 4 2";
        break;
    default:
        for(int i=1;i<=n;i++){
            cout << i << " ";
            i++;
        }
        for(int i = 2;i<=n;i++){
            cout << i << " ";
            i++;
        }
        break;
    }
}