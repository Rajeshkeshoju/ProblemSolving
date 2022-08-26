import java.util.*;

public class UniqueSubsets
{
    
    private static HashSet<String> sum(HashSet<String> set, ArrayList<Integer> list, int[] arr, int n, int i) {
        if(i >= n) {
            set.add(list.toString());
            return set;
        }
        
        set = sum(set, list, arr, n, i+1);
	    
        list.add(arr[i]);
        set = sum(set, list, arr, n, i+1);
        list.remove(list.size()-1);
        
        return set;
    }
    
    private static HashSet<String> getSubsetSum(int[] arr, int n) {
        HashSet<String> set = new HashSet<> ();
        ArrayList<Integer> list = new ArrayList<> ();
        
        set = sum(set, list, arr, n, 0);
        
        return set;
    }
    
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = 0;
		n = sc.nextInt();
		
		int[] arr = new int[n];
		for(int i=0; i<n; i++) {
		    arr[i] = sc.nextInt();
		}
		
		HashSet<String> set = new HashSet<> ();
		set = getSubsetSum(arr, n);
		
		for(String s: set) {
		    System.out.print(s + " ");
		}
	}
}
