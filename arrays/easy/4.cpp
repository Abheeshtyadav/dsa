#include<bits/stdc++.h>
using namespace std;



set<int> removed(vector<int> v){
    set<int> s;
    for(int i=0;i<v.size();i++){
        s.emplace(v[i]);

    }

    return s;

}



int main(){
    vector<int> v = {1,1,3,54,6,7};
    set<int> s;
    s= removed(v);
    for(auto i : s){
        cout << i << endl;

    }
}