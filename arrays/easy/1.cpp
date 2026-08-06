#include<bits/stdc++.h>
using namespace std;



int largest(vector<int> arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

int optimal_app(vector<int> arr){
    int largest=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            largest=arr[i];
        }

    }
    return largest;
}

int main(){
    vector<int> v= {2,4,5,3,6,7,3,9};
    cout << largest(v) << endl;
    cout << optimal_app(v);
    
}