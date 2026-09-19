#include<bits/stdc++.h>
using namespace std;


int missing(vector<int> v){
    int n = v.size();
    int sum1 = 0 ,sum2 = 0;
    for(int i = 0 ; i <= n ; i++){
        sum1+=i;

    }
    for(auto hehe: v ){
        sum2+=hehe;
    }
    return sum1-sum2;

}

int main(){
    vector<int> v = {1,2,3,4,6};
    cout << missing(v);
}