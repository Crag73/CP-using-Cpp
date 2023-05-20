#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int left=0;
    int right=n-1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int S,D=0;
    int turn=0;
    int temp=0;
    while(n--){
        if(arr[left]>arr[right]){
            temp=arr[left];
            left+=1;
        }
        else{
            temp=arr[right];
            right-=1;
        }
        if(turn==0){
            S+=temp;
            turn=1;
        }
        else{
            D+=temp;
            turn=0;
        }
    }
    cout<< S <<"\t" << D;
}