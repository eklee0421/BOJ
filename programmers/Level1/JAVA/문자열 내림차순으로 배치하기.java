import java.util.Arrays; 

class Solution {
    public String solution(String s) {
        String answer = "";
        char[] chars = s.toCharArray();
        Arrays.sort(chars);
        answer = new String(chars);
        answer = new StringBuffer(answer).reverse().toString(); //문자열 뒤집기 함수
        return answer;
    }
}
