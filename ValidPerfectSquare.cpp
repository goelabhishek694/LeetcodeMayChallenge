class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        
        int start=1; int end=num;
        while(start<=end){
        long long int mid=(end-start)/2 + start;
        if(mid*mid==num) return true;
        if(mid*mid>num) end=mid-1;
        if(mid*mid<num) start=mid+1;
        }
        return false;
    }
};