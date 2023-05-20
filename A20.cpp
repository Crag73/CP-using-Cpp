    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        string one,two;
        cin>>one>>two;
        int size1=0;
        int size2=0;
        int l=one.size();
        for(int i=0;i<l;i++){
            size1=tolower(one[i]);
            size2=tolower(two[i]);
            if(size1!=size2){
            if(size1>size2){
            cout<<1;
            }
            else{
                cout<<-1;
            }
            break;
            }
        }
        if(size1==size2){
            cout<<0;
        }
}
