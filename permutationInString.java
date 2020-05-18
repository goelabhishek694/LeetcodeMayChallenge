class Solution {
    public boolean checkInclusion(String s1, String s2) {
        if(s1.length()>s2.length()) return false;
        int len=s1.length();
        int[] freq1=new int[26];
        int[] freq2=new int[26];
        for(int i=0;i<s1.length();i++){
            int idx=s1.charAt(i)-'a';
            freq1[idx]++;
        }
         boolean res=false;
        for(int i=0;i<s2.length();i++){
            int idx=s2.charAt(i)-'a';
            freq2[idx]++;
            if(i>=len){
                freq2[s2.charAt(i-len)-'a']--;
            
}
            for(int j=0;j<26;j++){
                if(freq1[j]==freq2[j]) res=true;
                else{
                    res=false;
                    break;
                }
            
            }
            if(res==true) return res;
        }
        return false;
    }
}