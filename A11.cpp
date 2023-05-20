#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,height;
    cin>> n >>height;
    int count=0;
    int fheight=0;
    while(n--){
        cin>>fheight;
        if(fheight>height){
            count+=2;
        }
        else{
            count++;
        }
    }
    cout<< count;
}