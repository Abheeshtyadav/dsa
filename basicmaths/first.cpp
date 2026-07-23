#include <bits/stdc++.h>
using namespace std;

int countt(){
    int n;
    cin >> n;
    int counter=0;
    int las;
    while(n>0){
        las=n%10;
        counter++;
        n=n/10;
    }
    return counter;
}

int main(){

    cout << countt();
    
}

