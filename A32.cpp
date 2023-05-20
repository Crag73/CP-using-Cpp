#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int n,coin;
    cin>>n>>coin;
    int count=1;
    int digit=n%10;
    int add=n;
    while((digit!=coin)&&(digit!=0)){
        n+=add;
        digit=n%10;
        count++;
    }
    cout<< count;
    return 0;
}