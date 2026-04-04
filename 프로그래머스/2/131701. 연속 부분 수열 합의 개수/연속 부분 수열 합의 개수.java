import java.util.*;

class Solution {
    public int solution(int[] elements) {
        int maxLen = elements.length;
        int answer = 0;
        Set<Long> sumSet = new HashSet<>();
        
        for(int len = 1; len <= maxLen; len++){
            for(int start = 0; start < maxLen; start++ ){
                Long sum = 0L;
                for(int i = 0; i < len; i++){
                    if(start+i < maxLen){
                        sum += elements[start+i];
                    }else{
                        sum += elements[start+i-maxLen];
                    }
                }
                sumSet.add(sum);
            }
        }
        
        answer = sumSet.size();
        
        return answer;
    }
}