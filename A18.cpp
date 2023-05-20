#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    int column,row;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin>>num;
            if (num==1){
                column=abs(3-j);
                row=abs(3-i);
                cout<<row+column;
                break;
            }
            
        }
    }
}