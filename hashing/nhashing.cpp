#include <bits/stdc++.h>
using namespace std;



int main(){

    int arr[5] = {1,11,1,5,5};
    int hash[10]={0};
    for(int i=0;i<5;i++){
        hash[arr[i]]++;
    }

    cout << hash[5];

}