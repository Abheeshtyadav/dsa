#include<bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int> v){
    vector<int> neww;

    for(int i = 1 ; i<v.size() ; i++){

        neww.emplace_back(v[i]);

        
    }

    neww.emplace_back(v[0]);

    return neww;
}



vector<int> optimal0(vector<int> v){

    int temp = v[0];

    for(int i=0;i<v.size()-1;i++){
        v[i] = v[i+1];
    }

    v[v.size()-1] = temp;
    return v;

}



int main(){
    vector<int> v = {1,2,3,4,5};

    vector<int> x = optimal0(v);



    for(auto hehe: x){
    cout << hehe << " ";

    }
}