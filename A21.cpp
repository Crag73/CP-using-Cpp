#include <bits/stdc++.h>

using namespace std;

int main(){
    string in;
    cin>> in;
    int n=in.length();
    int arr[26]={0};
    int count=0;
    for(int i=0;i<n;i++){
        int toa=arr[in[i]-97];
        if(toa!=1){
            arr[in[i]-97]+=1;
            count+=1;
        }
    }
    if(count%2==0){
    cout<< "CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}