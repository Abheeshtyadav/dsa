#include <bits/stdc++.h>
using namespace std;

void rname(int n,int c,string name){
    if(n==c)
    return;

    cout << name << " ";
    c++;
    rname(n,c,name);

}


int main(){
    int n,counter=0;
    cin >> n;
    string name;
    cin >> name;
    rname(n,counter,name);

}