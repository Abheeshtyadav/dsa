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


int main(){
    vector<int> v = {10, 5, 2, 7, 1, 9};
    cout << brute(v,15);

}