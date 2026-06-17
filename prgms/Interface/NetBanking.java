package labprgms;
//interface prgms [Payment, NetBanking, PayPal, CreditCard,Run --> TestPayment]
public class NetBanking implements Payment{
	public double servicePay(double amount) {
		return amount * 0.02; 
	}
}
