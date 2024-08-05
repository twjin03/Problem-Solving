import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int hour = sc.nextInt();
        int min = sc.nextInt();
        int cook = sc.nextInt();

        int current = hour*60 + min;
        int end = current + cook;

        int endHour = (end/60)%24;
        int endMin = end%60;

        System.out.println(endHour + " " + endMin);
    }
}