#include <bits/stdc++.h>

using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int z=1;z<=i;z++)
        cout << z;
        for(int x=3;x>=i;x--)
        cout << " ";
        for(int x=3;x>=i;x--)
        cout << " ";
        for(int a=i;a>=1;a--)
        cout << a;
        
        cout << endl;
    }
}