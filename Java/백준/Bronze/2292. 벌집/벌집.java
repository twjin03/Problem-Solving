import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(); 
        int room = 1;         
        int range = 2;        
        
        if (n == 1) {
            System.out.println(1);
            return; 
        }

        
        while (range <= n) {
            range += (6 * room); 
            room++;              
        }

        System.out.println(room); 

        sc.close(); 
    }
}
