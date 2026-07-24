#include <bits/stdc++.h>
using namespace std;


bool duck_number(int n){
    int las=0;
    bool e=false;
    while(n!=0){
        las=n%10;
        if(las==0){
            e=true;
        }
        n=n/10;

    }
    return e;

}




int main(){
    int n;
    cin >> n;
    cout << duck_number(n) << endl;
}