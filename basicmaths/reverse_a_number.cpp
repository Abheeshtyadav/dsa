#include <bits/stdc++.h>
using namespace std;

int reverse(int x){
    int revn = 0;
        
        while (x != 0) {
            int las = x % 10;
            x /= 10;
            
            
            if (revn > INT_MAX / 10 || revn < INT_MIN / 10) {
                return 0;
            }
            
            revn = (revn * 10) + las;
        }
        
        return revn;
    }







int main(){
    int n;
    cin >> n;
    cout << reverse(n);

}