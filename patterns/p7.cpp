#include <bits/stdc++.h>

using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int x=3;x>=i;x--)
        cout << " ";
        for(int y=1;y<=i;y++)
        cout << "*";
        for(int z=0;z<=i;z++)
        cout << "*";
        
        cout << endl;
    }
}