#include <bits/stdc++.h>
using namespace std;



void number_of_odd_and_even_digits(int n){
    int odd=0,even=0,las=0;
    while(n!=0){
        las=n%10;
        if(las%2==0)
        even++;
        else
        odd++;
        n=n/10;


    }
    cout << "Odd = " << odd << " even = " << even;
    
}


int main(){
    int n;
    cin >> n;
    
    number_of_odd_and_even_digits(n);
}