#include <bits/stdc++.h>
using namespace std;

int we_can_also_do(int n){

    int count=(int)(log10(n)+1);
    return count;
    

}

int countt(int n){
    
    int counter=0;
    
    while(n>0){
        
        counter++;
        n=n/10;
    }
    return counter;
}

int main(){
    int n;
    cin >> n;

    cout << countt(n) << endl;
    cout << we_can_also_do(n) << endl;
    
}

