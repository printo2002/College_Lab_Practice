package labprgms;
//interface prgms [Payment, NetBanking, PayPal, CreditCard,Run -->  TestPayment]
public class CreditCard implements Payment {
	private double amount;
	public CreditCard() {
		amount = 0;
	}
	public CreditCard(double amt) {
		amount = amt;
	}
	public double servicePay(double amount) {
		return amount * 0.1;
	}
}
