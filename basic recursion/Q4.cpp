#include <bits/stdc++.h>
using namespace std;

void huh(int n){
    if(n==0)
    return;
    cout << n << endl;
    n--;
    huh(n);
}

int main(){
    int n;
    cin >> n;
    huh(n);
}