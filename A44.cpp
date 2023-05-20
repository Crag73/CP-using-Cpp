#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,i=0;
    cin >> n >> k;
    string ans;
    int distinct=1;
    char pri=98;
    int count=0;
    while(i<n){
        if(distinct<k){
            ans.push_back(pri++);
            distinct++;
            i++;
        }
        else if(count==0){
            ans.push_back('a');
            count=1;
            i++;
        }
        else{
            ans.push_back(--pri);
            pri++;
            count=0;
            i++;
        }
    }
    cout<< ans;
    return 0;
}