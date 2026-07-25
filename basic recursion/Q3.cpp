#include <bits/stdc++.h>
using namespace std;


void huh(int n,int counter){
    if(n==counter)
    return;
    counter++;
    cout << counter << endl;
    huh(n,counter);
}



int main(){
    int n,counter=0;
    cin >> n;
    huh(n,counter);

}