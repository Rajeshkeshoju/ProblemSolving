import java.util.Scanner;
import java.util.Arrays;
import java.lang.Math;

class Main  //class myCode
{
    static boolean isDigit(char c) {
        return ('0' <= c && c <= '9');
    }
    
    static boolean isCharacter(char c) {
        return ('A' <= c && c<= 'Z') || ('a' <= c && c<= 'z');
    }
    
    static int getIndex(String s, int n) {
        for(int i=0; i<s.length(); i++) {
            if(s.charAt(i) == (char)n) {
                return i;
            }
        }
        
        return -1;
    }
    
    static int getSum(String str) {
        int sum = 0;
        
        for(int i=0; i<str.length(); i++){
            sum += str.charAt(i) - '0';
        }
        
        return sum;
    }
    
    static String getString(String str) {
        String str1 = "";
        String str2 = "";
        
        for(int i=0; i<str.length(); i++) {
            if(isCharacter(str.charAt(i))) {
                str1 += str.charAt(i);
            }
            
            if(isDigit(str.charAt(i))) {
                str2 += str.charAt(i);
            }
        }
        
        if(str2 == "" || str1 == "") {
            return "-1";
        }
        
        char[] s1 = str1.toCharArray();
        char[] s2 = str2.toCharArray();
        
        Arrays.sort(s1);
        Arrays.sort(s2);
        
        str1 = new String(s1);
        str2 = new String(s2);
        
        String newString = "";
        
        int max = str1.charAt(str1.length()-1);
        int min = str1.charAt(0);
        
        int minIndex = getIndex(str, min);
        int maxIndex = getIndex(str, max);
        
        newString = str1;
        newString += String.valueOf(Math.abs(minIndex - maxIndex));
        newString += ":";
        
        newString += getSum(str2);
        
        max = str2.charAt(str2.length()-1);
        min = str2.charAt(0);
        
        minIndex = getIndex(str, min);
        maxIndex = getIndex(str, max);
        
        newString += String.valueOf(Math.abs(minIndex - maxIndex));
        
        return newString;
    }
    
	public static void main(String[] args) {
		String str = "";
		
		Scanner sc = new Scanner(System.in);
		str = sc.next();
		
		System.out.println(getString(str));
	}
}
