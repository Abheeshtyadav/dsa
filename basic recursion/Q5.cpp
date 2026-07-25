#include <bits/stdc++.h>
using namespace std;

void huh(int n,int counter,int sum){
    
    if(n==counter){
        cout << sum;
    return;}
    counter++;
    
    sum+=counter;
    huh(n,counter,sum);
    

}


int main(){
    int n,counter=0,sum=0;
    cin >> n;
    huh(n,counter,sum);
}