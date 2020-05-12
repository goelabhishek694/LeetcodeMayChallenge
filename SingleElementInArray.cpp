#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int start=0; int end=nums.size()-1;
    while(start<end){
        int mid=(end-start)/2 + start;
        if(nums[mid]==nums[mid^1]){
            start=mid+1;
        }
        else {
            end=mid;
        }
    }
    return nums[start];
}

int main(){
    vector<int>nums={1,1,2,2,3,4,4,5,5};
    int ans=singleNonDuplicate(nums);
    cout<<ans<<endl;
}