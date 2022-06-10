class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character,Integer> map = new HashMap<>();
        
        int i = 0;
        int j = 0;
        int maxLength = 0;
        while(j<s.length()){
            
            if(map.containsKey(s.charAt(j))){
                
                i = Math.max(i,map.get(s.charAt(j))+1);
                
            }
            map.put(s.charAt(j),j);
            maxLength = Math.max(maxLength,j-i+1);
            j++;
        }
        
        return maxLength;
    }
}