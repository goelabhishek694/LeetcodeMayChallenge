class Solution {
    public boolean checkStraightLine(int[][] coordinates) {
            Double slope1=null;
            double x1= coordinates[0][0];
            double y1= coordinates[0][1];

   
        for(int i=1;i<coordinates.length-1;i++){
            double x2= coordinates[i][0];
            double y2= coordinates[i][1];
            
            if(x2-x1==0) return false;
            
            
            if(slope1==null){
                slope1=(y2-y1)/(x2-x1);
                continue;
            }
            
            double slope2=(y2-y1)/(x2-x1);
            if(slope1!=slope2) return false;

        }
        return true;
    }
}