import java.util.*;

class Solution {
    static class Node{
        int x, y, count;
        
        Node(int x, int y, int count){
            this.x = x;
            this.y = y;
            this.count = count; 
        }
    }
    
    public int solution(int[][] maps) {
        int answer = -1;
        int maxY = maps.length-1;
        int maxX = maps[0].length-1;
        int[] dx = {0, 0, -1, 1};
        int[] dy = {1, -1, 0, 0};
        Queue<Node> queue = new ArrayDeque<>();
        boolean[][] visited = new boolean[maxY+1][maxX+1];
        
        queue.add(new Node(0,0,1));
        visited[0][0] = true;
        while(!queue.isEmpty()){
            Node now = queue.poll();
            if(now.x == maxX && now.y == maxY){
                answer = now.count;
            }
            for(int i = 0; i < 4; i++){
                Node next = new Node(now.x+dx[i], now.y+dy[i], now.count+1);
                if(0 <= next.x && next.x <= maxX && 0 <= next.y && next.y <= maxY && !visited[next.y][next.x] && maps[next.y][next.x] == 1){
                    queue.add(next);
                    visited[next.y][next.x] = true;    
                }
            }    
        }
        
        return answer;
    }
}