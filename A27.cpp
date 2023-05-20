#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>> arr[i];
    }
    string s;
    cin>>s;
    int cal=0;
    for(int i=0;i<s.length();i++){
        cal+=arr[s[i]-'0'-1];
    }
    cout<< cal;
    return 0;
}