#include<iostream>
#include<vector>
using namespace std;


    int maxSubarraySumCircular(vector<int>& A) {
        int sum1=0; int maxAns=A[0]; int totalSum=0; int sum2=0; int minAns=-A[0];
        for(int ele:A){          //max sum subarray
            sum1=ele+max(sum1,0);
            maxAns=max(sum1,maxAns);
        }
        
        for(int ele:A){
            sum2=(-1*(ele))+max(sum2,0);
            minAns=max(sum2,minAns);   
        }
        
        for(int ele:A){
            totalSum+=ele;
        }
        int circSum=totalSum+minAns;
        if(circSum==0) return maxAns;
        return max(circSum,maxAns);
        
    }
int main(){
    vector<int>arr={1,2,3,-4,-5,6,-8,9};
    int ans=maxSubarraySumCircular(arr);
    cout<<ans;
}