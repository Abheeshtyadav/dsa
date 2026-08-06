#include<bits/stdc++.h>
using namespace std;

int brute_slargest(vector<int> v){
    if(v.size()<2){
        return -1;
    }
    int largest=max(v[0],v[1]);
    int slargest=min(v[0],v[1]);
    for (int i = 2; i < v.size(); i++) {
    if (v[i] > largest) {
        slargest = largest;
        largest = v[i];
    } 
    else if (v[i] > slargest && v[i] != largest) 
        slargest = v[i];
    
}
    return slargest;

}

int brute_ssmallest(vector<int> v){
    int smallest=min(v[0],v[1]);
    int ssmallest=max(v[0],v[1]);
    for(int i=2;i<v.size();i++){
        if(v[i]< smallest){
            ssmallest=smallest;
            smallest=v[i];
        }
        if(v[i]< ssmallest && v[i] != smallest)
        ssmallest=v[i];
    }
    return ssmallest;


}
    


int main(){
    vector<int> v = {2,4,6,4,2,6,8,43,9,3};
    cout << brute_slargest(v) << endl;
    cout << brute_ssmallest(v) << endl;

}