#include<bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int> v){

    int count = 0;

    vector<int> final;
    for(int i = 0 ; i<v.size() ; i++){
        if(v[i] == 0){
            count++;
        }
        else{
            final.emplace_back(v[i]);
        }
    }



    for(int i = 0 ; i<count;i++){
        final.emplace_back(0);
    }

    for(int i = 0 ; i < final.size() ; i++){
        v[i] = final[i];
    }

    return v;


}

vector<int> optimal(vector<int> v){

    int x  = -1;
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i] == 0 ){
            x = i;
            break;
        }
        
    }

    for(int i = x+1;i<v.size() ; i++){
        if(v[i] != 0){
            swap(v[i] , v[x]);
            x++;
        }
        
    }
    return v;
}



int main(){
    vector<int> v = {1,3,0,5,4,0,3,6,0};
    vector<int> result = optimal(v);
    for(auto hehe:result){
        cout << hehe << " ";
    }

}