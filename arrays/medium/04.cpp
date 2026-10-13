//Spiral Matrix

#include<bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>> v){
    int w=v[0].size();
    int h=v.size();
    int left = 0 , right = w-1 , top = 0 , bottom = h-1;
    vector<int> ans;

    while(left <= right && top <= bottom){
    for(int i = left ; i <= right ; i++){
        ans.emplace_back(v[top][i]);

    }
    top++;
    for(int i = top ; i <= bottom ; i++){
        ans.emplace_back(v[i][right]);
    }
    right--;
    for(int i = right ; i >= left ; i--){
        ans.emplace_back(v[bottom][i]);
    }
    bottom--;
    for(int i = bottom ; i >= top ; i--){
        ans.emplace_back(v[i][left]);

    }
    left++;
}



    return ans;

}


int main(){
    vector<vector<int>> v={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    vector<int> s = spiral(v);
    for(auto hehe:s){
        cout << hehe <<" ";
    }

}