#include<bits/stdc++.h>
using namespace std;


int ls(vector<int> v , int k){
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i] == k)
        return i;

    }
    return -1;
}

int main(){
    vector<int> v = {1,2,3,5,6,4,235465,45,23};
    int k = 2;
    cout << ls(v,k);
}