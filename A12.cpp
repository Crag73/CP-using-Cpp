#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    cin>>cases;
    string str;
    cin>>str;
    int a,d=0;
    for(int i=0;i<cases;i++){
        if(str[i]=='A'){
            a+=1;
        }
        else{
            d+=1;
        }
    }
    if(a>d){
        cout<<"Anton";
    }
    else if(d>a){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }

}