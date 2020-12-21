import java.util.*;

class Solution {
    public boolean solution(String[] phone_book) {
        boolean answer = true;
    
        for(int i = 0; i < phone_book.length; i++){
            for(int j = 0; j < phone_book.length; j++){
                if(i == j) continue;
                if((phone_book[j].indexOf(phone_book[i])) == 0 ) {answer = false; return answer;}
            }
        }
        
        return answer;
    }
}
