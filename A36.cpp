#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,input;
    cin>> n;
    vector <int> arr;
    for(int i=0;i<n;i++){
        cin>>input;
        arr.push_back(input);
    }
    int shots,x,y;
    int left,right;
    cin>> shots;
    for(int i=0;i<shots;i++){
        cin>> x >> y;
        left=y-1;
        right=arr[x-1]-y;
        arr[x-1]=0;
        if(x-2>=0){
            arr[x-2]+=left;
        }
        if(x<n){
            arr[x]+=right;
        }
    }
    for(int i=0;i<n;i++){
        cout<< arr[i] << "\n";
    }

    return 0;
}