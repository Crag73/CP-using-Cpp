#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int free=0;
    int crime;
    int count=0;
    while(n--){
        cin>> crime;
        if((crime==-1)&&(free!=0)){
            free--;
        }
        else if(crime==-1){
            count++;
        }
        else{
            free+=crime;
        }
    }
    cout << count;    
    return 0;
}