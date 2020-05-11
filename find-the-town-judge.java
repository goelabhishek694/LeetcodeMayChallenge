class Solution {
    public int findJudge(int N, int[][] trust) {
         if(trust.length==0) return N;
        int[] map=new int[N+1];  
        
        for(int i=0;i<trust.length;i++){
            map[trust[i][0]]--;   // traversing rows of first col
            map[trust[i][1]]++;   // traversing rows of second col
        }
        
        for(int i=0; i<map.length; i++){
            if(map[i]==N-1) return i;
        }
        return -1;
    }
}