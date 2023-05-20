#include <bits/stdc++.h>
using namespace std;

int main(){
    int problems;
    int a,b,c;
    int count=0;
    cin>> problems;
    while(problems--){
        cin>>a>>b>>c;
        if(a+b+c>=2){
            count+=1;
        }
    }
    cout<< count;
}