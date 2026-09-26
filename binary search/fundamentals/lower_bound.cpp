#include<bits/stdc++.h>
using namespace std;

int lowerb(const std::vector<int>& v, int k) {
    int low = 0;
    int high = static_cast<int>(v.size()) - 1;
    int ans = v.size(); 

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (v[mid] >= k) {
            ans = mid;       
            high = mid - 1; 
        } else {
            low = mid + 1;   
        }
    }

    return ans;
}


int main(){
    vector<int> v = {1,2,3,3,3,4,5,6};
    cout << lowerb(v,3) << endl;
}