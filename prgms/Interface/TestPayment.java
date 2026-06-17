package labprgms;
//interface prgms [Payment, NetBanking, PayPal, CreditCard, Run --> TestPayment]
import java.util.Scanner;
public class TestPayment {
	public static void main(String[] args) {
		CreditCard c1 = new CreditCard();
		NetBanking n1  = new NetBanking();
		PayPal p1 = new PayPal();
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the amount");
		double payment = sc.nextDouble();
		System.out.println("Service Charges for "+payment+" in Credit Card : "+c1.servicePay(payment));
		System.out.println("Service Charges for "+payment+" in NetBanking : "+n1.servicePay(payment));
		System.out.println("Service Charges for "+payment+" in Pay Pal : "+p1.servicePay(payment));
	}

}
