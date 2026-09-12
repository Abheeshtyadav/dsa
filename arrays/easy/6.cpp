#include<bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int> v , int k){

    vector<int> temp;
    for(int i=0;i<k;i++){
        temp.emplace_back(v[i]);
    }

    for(int i = 0 ; i<v.size() ; i++){
        v[i] = v[i+k];
    }

/*     for(int i = (v.size() - k) ; i<v.size() ; i++){
        v[i] = temp[0];
    } */

    for(int i = 0 ; i <k ; i++){
        v[v.size() - k + i] = temp[i];
    }

    return v;


}


vector<int> optimal(vector<int> v , int x){

    vector<int> temp;
    int k;
    if( x >= v.size()){
         k = x % v.size(); 
    }
    else{
        k=x;
    }
    
    for(int i=0;i<k;i++){
        temp.emplace_back(v[i]);
    }

    for(int i = 0 ; i<v.size() ; i++){
        v[i] = v[i+k];
    }

/*     for(int i = (v.size() - k) ; i<v.size() ; i++){
        v[i] = temp[0];
    } */



    for(int i = 0 ; i <k ; i++){
        v[v.size() - k + i] = temp[i];
    }

    return v;


}





/* vector<int> towardsright(vector<int> v , int k){

    vector<int> temp;
    for(int i = (v.size() - k ) ; i<v.size() ; i++){
        temp.emplace_back(v[i]);
    }

    for(int i = 0 ;i < v.size() ; i++){
        v[k+i] = v[i];
    }

    return v;

} */




int main(){
    vector<int> v = {1,2,3,4,5,6};
    int k = 6;
    vector<int> neww = optimal(v,k);
    
    for(auto n: neww){
        cout << n << " ";

    }

}