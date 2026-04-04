import java.util.*;

class Solution {
    public String[] solution(String[] record) {
        Map<String, String> userMap = new HashMap<>();
        List<String> answerList = new ArrayList<>();
        String[] answer = {};
        
        for(String log : record){
            String[] parts = log.split(" ");
            String command = parts[0];
            String id = parts[1];
            
            if(command.equals("Enter")||command.equals("Change")){
                userMap.put(id, parts[2]);
            }
        }
        
        for(String log : record){
            String[] parts = log.split(" ");
            String command = parts[0];
            
            if(command.equals("Enter")||command.equals("Leave")){
                String id = parts[1];
                String name = userMap.get(id);
                String logKor = command.equals("Enter")? name+"님이 들어왔습니다." : name+"님이 나갔습니다.";
                answerList.add(logKor);
            }
        }
        
        answer = answerList.toArray(new String[0]);

        return answer;
    }
}