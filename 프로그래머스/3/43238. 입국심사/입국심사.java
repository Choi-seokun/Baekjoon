import java.util.*;

class Solution {
    public long solution(int n, int[] times) {
        Arrays.sort(times);
        long maxTime = (long)times[times.length - 1] * n;
        long answer = maxTime;
        
        long left = 0;
        long right = maxTime;
        long mid = (left + right) / 2;
        while(left<=right){
            long sum = 0;
            for(int i = 0; i<times.length; i++){
                sum += mid / times[i];
            }
            
            if(n <= sum){
                if(mid < answer){
                    answer = mid;
                }
                right = mid - 1;
                mid = (left + right) / 2;
            }else{
                left = mid + 1;
                mid = (left + right) / 2;
            }
        }
        
        return answer;
    }
}