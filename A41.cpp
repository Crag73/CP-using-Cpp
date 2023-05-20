#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,integer,distress=0,icecream;
    char symbol;
    cin>> n >> icecream;
    for(int i=0;i<n;i++){
        cin>> symbol >> integer;
        if(symbol=='+'){
            icecream+=integer;
        }
        else{
            if(integer<=icecream){
                icecream-=integer;
            }
            else{
                distress+=1;
            }
        }
    }
    cout<< icecream<< " "<< distress;
    return 0;
}