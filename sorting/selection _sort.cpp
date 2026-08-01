#include <bits/stdc++.h>
using namespace std;



void selection_sort(int arr[],int n){
    int minn=0;
    
    for(int i=0;i<n-1;i++){
        minn=i;
        for(int x=i;x<n;x++){
            if(arr[x]<arr[minn]){
                minn=x;

            }

        }
        int temp=arr[minn];
                arr[minn]=arr[i];
                arr[i] = temp;

    }
    for(int z=0;z<n;z++){
        cout << arr[z] << " ";
    }
   
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    selection_sort(arr,n);

}