#include <bits/stdc++.h>
using namespace std;





bool pallindrom(int n){
    if(n<0){
        return false;
    }
    else{
        long long org=n;
        long long newn=0;
        int las=0;
        while(n>0){
            las=n%10;
            newn = (newn*10) + las;
            n=n/10;

            
        }
        return newn==org;
    }
}









int main(){
    int n;
    cin >> n;
    cout << pallindrom(n);

}