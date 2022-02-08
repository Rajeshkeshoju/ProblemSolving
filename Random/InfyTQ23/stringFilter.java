import java.util.*;

public class Main
{
    
    static boolean isDigit(char c) {
        return ('0' <= c && c <= '9');
    }
    
    static String getNumberString(String str) {
        String numString = "";
        
        for(int i=0; i<str.length(); i++) {
            if(isDigit(str.charAt(i))) {
                numString += str.charAt(i);
            }
        }
        
        return numString;
    }
    
    static String getTextString(String str) {
        String textString = "";
        
        for(int i=0; i<str.length(); i++) {
            if(!isDigit(str.charAt(i))) {
                textString += str.charAt(i);
            }
        }
        
        return textString;
    }
    
    static boolean isContains(ArrayList<String> list, String s) {
        for(int i=0; i<list.size(); i++) {
            if(s.equals(list.get(i))) {
                return true;
            }
        }
        
        return false;
    }
    
    static ArrayList<String> getArray(String s) {
        ArrayList<String> list = new ArrayList<String>();
        
        String[] str = s.split(",");
        for(int i=0; i<str.length; i++) {
            list.add(str[i]);
        }
        
        return list;
    }
    
	public static void main(String[] args) {
	    int n = 2;
		ArrayList<String>[] list = new ArrayList[n];
		
		for (int i = 0; i < n; i++) {
            list[i] = new ArrayList<String>();
        }
		
		Scanner sc = new Scanner(System.in);
		
		for(int i=0; i<n; i++) {
		    String s = sc.nextLine();
		    ArrayList<String> l = getArray(s);
		    
		    for(int j=0; j<l.size(); j++) {
		        list[i].add(l.get(j));
		    }
		}
        
        ArrayList<String>[] list2 = new ArrayList[n];
		
		for (int i = 0; i < n; i++) {
            list2[i] = new ArrayList<String>();
        }
        
        for(int i=0; i<list[0].size(); i++) {
            String numString = getNumberString(list[0].get(i));
            String textString = getTextString(list[0].get(i));
            
            if(isContains(list[1], numString)) {
                list2[0].add(numString);
                list2[1].add(textString);
            }else{
                list2[0].add("NA");
                list2[1].add("NA");
            }
        }
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<list2[i].size()-1; j++) {
                System.out.print(list2[i].get(j) + ",");
            }
            
            System.out.println(list2[i].get(list2[i].size()-1));
        }   
	}
}
