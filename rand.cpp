#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> i(5,100);
    set<int> se(i.begin(),i.end());
    if(se.size()%2==0){
        cout << se.size()/2;
    }
    else{
        cout << (se.size()/2) + 1;
    }
    
}