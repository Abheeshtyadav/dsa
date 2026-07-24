#include <bits/stdc++.h>
using namespace std;



int ndig(int n){
    int counter = 0;
    while(n>0){
        n=n/10;
        counter++;

    }
    return counter;
}

bool armstrong(int n){
    int digits=ndig(n);
    int sum=0;
    int org=n;
    
    while(n>0){
        sum+=pow((n%10),digits);
        n=n/10;

    }
    return sum==org;
}






int main(){
    int n;
    cin >> n;
    cout << armstrong(n);
}