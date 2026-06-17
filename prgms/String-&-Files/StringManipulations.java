package labprgms;
import java.util.Scanner;

public class StringManipulations {
// Demonstrate String Manipulation
public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);

    String str1 = new String("hellollll");
    System.out.println(str1);

    String str2 = "Welcome";
    System.out.println(str2);

    char[] data = { 'W', 'e', 'l', 'c', 'o', 'm', 'e' };

    // prints array as string
    System.out.println(data);

    String str3 = new String(data);
    System.out.println(str3);

    System.out.println("Enter a string with space:");
    String str4 = sc.nextLine();

    System.out.println("Enter a single word:");
    String str5 = sc.next();

    System.out.println("String using nextLine(): " + str4);
    System.out.println("String using next(): " + str5);

    // Convert int to String
    int num = 5;
    String str6 = String.valueOf(num);
    System.out.println("Integer to String: " + str6);

    // Convert String to int
    String str7 = "22";
    int intValue = Integer.parseInt(str7);
    System.out.println("String to Integer: " + intValue);

    // Convert String to double
    String str8 = "22.5";
    double doubleValue = Double.parseDouble(str8);
    System.out.println("String to Double: " + doubleValue);

    // substring()
    String fullName = "John Honae";

    // substring(startIndex, endIndex)
    String firstName = fullName.substring(0, 4);
    String lastName = fullName.substring(5);

    System.out.println("First name: " + firstName);
    System.out.println("Last name: " + lastName);

    // length()
    System.out.println("No of characters: " + fullName.length());

    // indexOf()
    String str9 = "Welcome to String manipulation and String";

    int index1 = str9.indexOf("String");
    int index2 = str9.indexOf("java");

    System.out.println("Index of String: " + index1);
    System.out.println("Index of java: " + index2);

    // String Comparison
    String str10 = new String("Hello");
    String str11 = new String("Hello");
    String str12 = "hello";

    if (str10 == str11) {
        System.out.println("Same memory");
    } else {
        System.out.println("Different memory");
    }

    // Compare content
    if (str10.equals(str11)) {
        System.out.println("Same content");
    } else {
        System.out.println("Different content");
    }

    // compareTo()
    System.out.println("CompareTo Result: " + str11.compareTo(str12));

        sc.close();
    }
}