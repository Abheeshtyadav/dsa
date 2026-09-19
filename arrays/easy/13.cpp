#include<bits/stdc++.h>
using namespace std;

int brute(vector<int> v , int  k){
    int maxi = 0;
    for(int i = 0 ; i < v.size() ; i++){
        int count = 0;
        int sum = 0;
        for(int x = i ; x < v.size() ; x++){
            sum = sum + v[x];
            if(sum <= k){
                count++;
                maxi = max(maxi,count);


            }
            else{
                break;
            }

        }

    }
    return maxi;
}


int optimal(vector<int> v, int k){
    int left = 0 , right = 0, sum = 0 , maxi = 0;
    while(right < v.size()){
        sum+=v[right];
        

        while( left <=right &&sum > k){
            sum-=v[left];
            left++;
        }
        if(sum == k){
            maxi = max(maxi , right - left +1);
        }
        if(right<v.size()){
            right++;
        }
        
    }
    return maxi;
}


int main(){
    vector<int> v = {-1, 1, 1};
    cout << optimal(v,1);

}