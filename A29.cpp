#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>> arr1[i]>>arr2[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                if(arr1[i]==arr2[j]){
                    count++;
                }
            }
        }
    }
    cout<< count;


    return 0;
}