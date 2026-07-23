#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int , int> p = {1,3};
    vector<int> v(1,100);
    v.push_back(1);
    v.push_back(4);
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    
    cout << *it << endl;
    }
    cout << "-------------" << endl;
    sort(v.begin(),v.end(),greater<int>());
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout << *it << endl;
    }

}