#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int x=0;x<=i;x++)
        cout << "*";
        cout << endl;
        
    }
    for(int a=0;a<4;a++){
        for(int b=4;b>a;b--)
        cout << "*";
        cout << endl;
    }
}