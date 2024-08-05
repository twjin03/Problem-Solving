import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        int reward;

        if (a == b && b == c) {
            reward = 10000 + a * 1000;
        } else if (a == b || a == c) {
            reward = 1000 + a * 100;
        } else if (b == c) {
            reward = 1000 + b * 100;
        } else {
            int max = a;
            if (b > max) max = b;
            if (c > max) max = c;
            reward = max * 100;
        }

        System.out.println(reward);
    }
}
