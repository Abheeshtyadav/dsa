#include <bits/stdc++.h>
using namespace std;


set<int> optimal_approch(int n){
    set<int> se;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
        se.emplace(i);
        
        se.emplace(n/i);
        
        }
        
    }
    return se;
}



int main(){
    int n;
    cin >> n;
    /* all_divisor(n); */
    set<int> se=optimal_approch(n);
    if(se.size()==2)
    cout << "Prime number" << endl;
    else
    cout << "Not a prime number" << endl;

}