class Solution {
    public boolean isPerfectSquare(int num) {
                if(num==1) return true;
          
        int n=num; int noOfDigits=0; int q=1;
        while(q>0){
            q=n/10;
            n=q;
            noOfDigits++;
        }
        long ans=num;
        for(int i=0;i<noOfDigits;i++){
            ans=ans/2;
        }
        for(long i=2;i<=ans;i++){
            if(i*i==num) return true;
            if(i*i>num) return false;
        }
        return false;

    }
}