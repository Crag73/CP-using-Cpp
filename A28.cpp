#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>> s;
    int sum=0;
    int last='a';
    for(int i=0;i<s.length();i++){
        sum+=min(abs(last-s[i]),26-abs(last-s[i]));
        last=s[i];
    }
    cout<<sum;

    return 0;
}