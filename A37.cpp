#include <bits/stdc++.h>

using namespace std;

int main(){
    
    long long n,b,d,temp,ans=0,sum=0;
    cin>>n >> b >>d;
    for(int i=0;i<n;i++){
        cin>> temp;
        if(temp>b){
            continue;
        }
        sum+=temp;
        if(sum>d){
            ans++;
            sum=0;
        }
        
    }
    cout<< ans;
    return 0;
}