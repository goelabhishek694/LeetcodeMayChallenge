class SingleElementInArray {

    public static void main(String[] args){
        int[] nums={1,1,2,2,3,4,4,5,5};
        int ans=singleNonDuplicate(nums);
        System.out.println(ans);
    } 

    public static int singleNonDuplicate(int[] nums) {
        int start=0; int end=nums.length-1;
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
}