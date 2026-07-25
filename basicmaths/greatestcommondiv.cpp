#include <bits/stdc++.h>
using namespace std;


int brute_force(int n,int m){

    int mini=min(n,m);
    for(int i=mini;i>0;i--){
        if(n%i==0 && m%i==0)
        return i;
    }


    return 1;
}

int Euclidean(){
    
}

int main(){
    int n,m;
    cin >> n;
    cin >> m;
    cout << brute_force(n,m) << endl;

}