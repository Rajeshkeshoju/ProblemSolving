import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;
import java.lang.Math;

public class Main
{
    static Boolean isCharacter(char c) {
        return ('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z');
    }
    
    static Boolean isDigit(char c) {
        return '0' <= c && c <= '9';
    }
    static String getString(String str) {
        Map<Character, Integer> map = new HashMap<Character, Integer>();
        Map<Integer, Integer> map2 = new HashMap<Integer, Integer>();
        
        for(int i=0; i<str.length(); i++) {
            char c = str.charAt(i);
            
            if(isCharacter(c)) {
                if(map.containsKey(c)) {
                    map.put(c, map.get(c)+1);
                }else {
                    map.put(c, 1);
                }
            }
            
            if(isDigit(c)) {
                if(map2.containsKey(c)) {
                    map2.put(c-'0', map2.get(c)+1);
                }else {
                    map2.put(c-'0', 1);
                }
            }
        }
        
        int maxCharFrequency = 0;
        for(Map.Entry entry: map.entrySet()) {
            if((int)entry.getValue() < maxCharFrequency) {
                maxCharFrequency = (int)entry.getValue();
            }
        }
        
        int maxDigitFrequency = 0;
        for(Map.Entry entry: map2.entrySet()) {
            if((int)entry.getValue() < maxDigitFrequency) {
                maxDigitFrequency = (int)entry.getValue();
            }
        }
        
        
        String newString = "";
        int specialIndex = Math.abs(maxDigitFrequency - maxCharFrequency);
        char specialChar = str.charAt(specialIndex);
        
        for(int i=0; i<str.length(); i++) {
            if(str.charAt(i) == specialChar) {
                continue;
            } 
            
            if(str.charAt(i) == ' ') {
                newString += "$";
            }else{
                newString += str.charAt(i);
            }
        }
        
        return newString;
    } 
    
	public static void main(String[] args) {
		String str = "";
		Scanner sc = new Scanner(System.in);
		
		str = sc.nextLine();
		System.out.println(Main.getString(str));
	}
}
