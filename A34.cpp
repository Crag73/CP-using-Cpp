#include <bits/stdc++.h>
using namespace std;
int main(){
    int ans=1;
    int count=0;
    string s1,s2;
    cin>> s1;
    cin>> s2;
    for(int i=0;i<s2.length();i++){
        if (s2[i]==s1[count]){
            ans++;
            count++;
        }
    }
    cout<< ans;
    return 0;
}