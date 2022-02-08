import java.util.*;

public class Main
{
    static int getMax(ArrayList<Integer> list){
        int max = -1;
        
        for(int i=0; i<list.size(); i++) {
            if(max < list.get(i)){
                max = list.get(i);
            }
        }
        
        return max;
    }
    
    static ArrayList<String> getArray(String s) {
        ArrayList<String> list = new ArrayList<String>();
        
        String[] str = s.split(",");
        for(int i=0; i<str.length; i++) {
            list.add(str[i]);
        }
        
        return list;
    }
    
    static boolean isPerfectSquare(int n) {
        double sqrt=Math.sqrt(n); 
        return ((sqrt - Math.floor(sqrt)) == 0);   
    }
    
	public static void main(String[] args) {
	    int n  = 0;
	    
	    Scanner sc = new Scanner(System.in);
	    
	    n = sc.nextInt();
	    
	    ArrayList<Integer>[] list= new ArrayList[n];
	    
	    for (int i = 0; i < n; i++) {
            list[i] = new ArrayList<Integer>();
        }
	    
	    for(int i=0; i<n; i++) {
	        String s = sc.nextLine();
		    ArrayList<String> l = getArray(s);
		    
		    for(int j=0; j<l.size(); j++) {
		        list[i].add(Integer.valueOf(l.get(j)));
		    }
	    }
	    
	    ArrayList<Integer> result = new ArrayList<Integer> ();
	    int temp = 0;
	    for(int i=0; i<list.length; i++) {
	        if(i % 2 != 0) {
	            for(int j=list[i].size()-1; j>=0; j--) {
	                temp += list[i].get(j);
	                
	                if(isPerfectSquare(temp)) {
	                    result.add(temp);
	                    temp = 0;
	                }
	            }
	        }else{
	            for(int j=0; j<list[i].size(); j++) {
	                temp += list[i].get(j);
	                
	                if(isPerfectSquare(temp)) {
	                    result.add(temp);
	                    temp = 0;
	                }
	            }
	        }
	    }
	    
	    System.out.println(getMax(result));
	}
}
