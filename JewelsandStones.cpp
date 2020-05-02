class Solution {
    public int numJewelsInStones(String J, String S) {
        int[] arr=new int[58]; int count=0;
        for(int i=0;i<J.length();i++){
            int idx=J.charAt(i)-'A';
            arr[idx]++;
        }
        for(int i=0;i<S.length();i++){
            int idx=S.charAt(i)-'A';
            if(arr[idx]!=0) count++;
        }
        return count;
    }
}