#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int lcount=0;
    int ucount=0;
    for(int i=0;i<s.length();i++){
        if (isupper(s[i])){
            ucount+=1;
        }
        else{
            lcount+=1;
        }
    }
    if(ucount>lcount){
        for(int i=0;i<s.length();i++){
            cout<< (char)toupper(s[i]);
        }
    }
    else{
        for(int i=0;i<s.length();i++){
            cout<< (char)tolower(s[i]);
        }
    }
}