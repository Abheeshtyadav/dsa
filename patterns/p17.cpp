#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0;i<4;i++){
        for(int z=3;z>i;z--)
        cout << "e";
        for(int x=0;x<=i;x++)
        cout << char(65+x);
        for(int y = 1 ; y<=i;y++)
        cout << char(64+y);
        cout << endl;
    }
}