import java.util.Scanner;
import java.util.ArrayList;

public class Main
{
    private static ArrayList<Integer> getMaxMeetingsInARoom(int[] start, int[] end, int n) {
        ArrayList<Integer> list = new ArrayList<> ();
        list.add(1);
        ArrayList<Integer> meets = new ArrayList<> ();
        meets.add(1);
        
        for(int i=0; i<n; i++) {
            if(meets.get(i) == 0) {
                continue;
            }
            
            for(int j=i+1; j<n; j++) {
                if(end[i] < start[j]) {
                    list.add(j+1);
                    meets.add(1);
                    break;
                } else {
                    meets.add(0);
                }
            }
        }
        
        return list;
    }
    
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = 0;
		n = sc.nextInt();
		
		int[] start = new int[n];
		int[] end = new int[n];
		
		for(int i=0; i<n; i++) {
		    start[i] = sc.nextInt();
		}
		
		for(int i=0; i<n; i++) {
		    end[i] = sc.nextInt();
		}
		
		ArrayList<Integer> list = new ArrayList<> ();
		
		list = getMaxMeetingsInARoom(start, end, n);
		
		for(int i: list) {
		    System.out.print(i + " ");
		}
	}
}
