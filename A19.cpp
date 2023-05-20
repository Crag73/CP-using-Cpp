#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases;
    cin>>cases;
    int arr[cases];
    for(int i=0;i<cases;i++){
        cin>> arr[i];
    }
    sort(arr,arr+cases);
    for(int i=0;i<cases;i++){
        cout<< arr[i]<<" ";
    }   
}