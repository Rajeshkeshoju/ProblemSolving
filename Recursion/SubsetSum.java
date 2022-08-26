import java.util.*;

public class SubsetSum
{
    
    private static ArrayList<Integer> sum(ArrayList<Integer> list, int[] arr, int n, int i, int sum) {
        if(i >= n) {
            list.add(sum);
            sum = 0;
            return list;
        }
        
        list = sum(list, arr, n, i+1, sum + arr[i]);
        list = sum(list, arr, n, i+1, sum);
        
        return list;
    }
    
    private static ArrayList<Integer> getSubsetSum(int[] arr, int n) {
        ArrayList<Integer> list = new ArrayList<> ();
        
        list = sum(list, arr, n, 0, 0);
        Collections.sort(list);
        
        return list;
    }
    
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = 0;
		n = sc.nextInt();
		
		int[] arr = new int[n];
		for(int i=0; i<n; i++) {
		    arr[i] = sc.nextInt();
		}
		
		ArrayList<Integer> list = new ArrayList<> ();
		list = getSubsetSum(arr, n);
		
		for(int sum: list) {
		    System.out.print(sum + " ");
		}
	}
}
