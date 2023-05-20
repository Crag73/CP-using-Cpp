#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> nums={1,-2,3,-2};
        int n=nums.size();
        vector<int> arr1;
        vector<int> arr2;
        int max=nums[0];
        int curr_sum=0;
        for(int i=0;i<n;i++){
            if(curr_sum<0){
                curr_sum=0;
            }
            curr_sum+=arr1[i];
            if(curr_sum>max){
                max=curr_sum;
            }
            arr1.push_back(max);
        }
        for(int i=0;i<n;i++){
            cout<<arr1[i]<<"\t";
        }
}