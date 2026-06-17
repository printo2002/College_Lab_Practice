package labprgms;
import java.util.Scanner;

class InvalidEmailException extends Exception {
    InvalidEmailException(String msg) {
        super(msg);
    }
}
public class Emailvalidate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Email ID: ");
        String email = sc.nextLine();
        try {
            if (!email.contains("@") || !email.contains(".")) {
                throw new InvalidEmailException("Invalid Email ID");
            }

            System.out.println("Valid Email ID");

        } catch (InvalidEmailException e) {
            System.out.println(e.getMessage());
        }

        sc.close();
    }
}