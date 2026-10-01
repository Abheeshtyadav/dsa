#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> v= {1,2,3,4,5,67,5,7};
    auto maxi = max_element(v.begin(),v.end());
    cout << distance(v.begin(),maxi);


}