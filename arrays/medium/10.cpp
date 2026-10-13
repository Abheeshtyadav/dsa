//two sum

#include<bits/stdc++.h>
using namespace std;


vector<int> brute(vector<int> v , int target){
    for(int i = 0 ; i < v.size() ; i++){
        for(int x = 0 ; x < v.size() ; x++){
            if(i != x){
                if(v[i] + v[x] == target)
                return {i,x};
            }
        }
    }
    return {-1,-1};
}



vector<int> better(vector<int> v , int target){
    for(int i = 0 ; i < v.size() ; i++){
        for(int x = i+1 ; x < v.size() ; x++){
            
                if(v[i] + v[x] == target)
                return {i,x};
            
        }
    }
    return {-1,-1};
}


vector<int> morebetter(vector<int> v , int target){
    map<int , int> m;
    for(int i = 0 ; i < v.size() ; i++){
        if(m.find(target-v[i]) != m.end()){
            
            return {i,m.find(target-v[i])->second};
        }
        else{
            m[v[i]] = i;
        }
    }
    return {-1,-1};

}

//below will only work for yes no one
vector<int> sbetter(vector<int> v , int target){
    int left = 0 , right = v.size() - 1;
    sort(v.begin() , v.end());
    while(left <= right){
        int needed = target-v[left];
        if(needed == v[right]){
            return {left,right};
        }
        if(v[right] > needed){
            right--;

        }
        else{
            left++;
        }

        
    }
    return {-1,-1};
}




int main(){
    vector<int> v = {2,7,11,15};
    vector<int> ans = sbetter(v,9);
    for(auto hehe:ans){
        cout << hehe << " ";
    }


    

}