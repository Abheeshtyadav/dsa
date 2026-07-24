#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
    int las=0;
    while(n>0){
        las=n%10;
        return las;
        n=n/10;

    }

}





int main(){
    int n;
    cin >> n;
    cout << reverse(n);

}