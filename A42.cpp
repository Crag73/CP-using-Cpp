#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,ans;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]!='+'){
            ans.push_back(s[i]);
        }
    }
    sort(ans.begin(),ans.end());
    cout<< ans[0];
    for(int i=1;i<ans.length();i++){
        cout<< "+" <<ans[i];
    }
    return 0;
}