package labprgms;
//interface prgms [Payment, NetBanking, PayPal, CreditCard,Run -->  TestPayment]
public class PayPal implements Payment{
	public double servicePay(double amount) {
		return amount * 0.01; 
	}
}
