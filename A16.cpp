#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>> a >> b;
    int count=0;
    while(b>=a){
        count+=1;
        a*=3;
        b*=2;
    }
    cout << count;
}