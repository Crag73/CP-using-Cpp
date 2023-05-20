#include <bits/stdc++.h>

using namespace std;

int main(){
    int r1,r2,comp,ans;
    cin>> r1 >> r2;
    if(r1>r2){
        comp=r1;
    }
    else{
        comp=r2;
    }
    ans=(6-comp+1);
    if(ans==0){
        cout<< "0/1";
    }
    else if(ans==6){
        cout<< "1/1";
    }
    else if(ans%2==0){
        ans=ans/2;
        cout<< ans << "/3";
    }
    else if(ans%3==0){
        ans=ans/3;
        cout<< ans << "/2";
    }
    else{
        cout<< ans << "/6";
    }
}