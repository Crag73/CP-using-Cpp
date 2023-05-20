#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,tc,n,oven;
    cin>> n >> t >> tc >>oven;
    int r1=1;
    int cakes=0;
    int countt=1,counto=1,countc=1;
    while(r1!=-1){
        if(cakes>=n){
            break;
        }
        if(r1==t*countt){
            cakes+=tc;
            countt++;
        }
        if(cakes>=n){
            break;
        }
        if(r1>=oven){
            if(counto==t*countc){
                cakes+=tc;
                countc++;
            }
            counto++;
        }
        r1++;
    }

    cakes=0;
    countt=1;
    int r2=1;
     while(r2!=-1){
        if(cakes>=n){
            break;
        }
        if(r2==t*countt){
            cakes+=tc;
            countt++;
        }
        r2++;
     }

    if(r2-1>r1){
        cout<< "YES";
    }
    else{
        cout<< "NO";
    }
}