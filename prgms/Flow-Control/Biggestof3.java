package labprgms;
import java.util.Scanner;
public class Biggestof3{
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int a, b, c;

        System.out.println("Enter first number:");
        a = sc.nextInt();

        System.out.println("Enter second number:");
        b = sc.nextInt();

        System.out.println("Enter third number:");
        c = sc.nextInt();

        if (a > b && a > c) {
            System.out.println(a + " is the biggest number");
        }
        else if (b > a && b > c) {
            System.out.println(b + " is the biggest number");
        }
        else {
            System.out.println(c + " is the biggest number");
        }

        sc.close();
    }
}

