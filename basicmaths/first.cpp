#include <bits/stdc++.h>
using namespace std;

int countt(){
    int n;
    cin >> n;
    int counter=0;
    
    while(n>0){
        
        counter++;
        n=n/10;
    }
    return counter;
}

int main(){

    cout << countt();
    
}

