#include <bits/stdc++.h>
using namespace std;

void rec(int c){

    if(c == 20)
    return;

    c++;
    cout << c << "      ";
    rec(c);

}



int main(){

    int c=0;
    rec(c);

}