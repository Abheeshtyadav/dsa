#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int x=1;x<=i;x++)
        cout << " ";
        for(int z=5;z>i;z--)
        cout << "*";
        for(int s=4;s>i;s--)
        cout << "*";
        cout << endl;
    }
}