#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    int size = s.size();
    int max1 = 1;
    int final = 1;
    for(int i=1;i<size;i++){
        if(s[i] == s[i-1]) {
            max1++;
        }
        else{
            max1 = 1;
        }
    final = max(final,max1);
    }
    cout << final;
}