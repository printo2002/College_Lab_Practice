package labprgms;
public class ThreadClass extends Thread {
	private  String message;
	public ThreadClass(String message) {
		this.message = message;
	}
	public void run()
	{
		for(int i = 0; i<5; i++)
		{
			System.out.println(message);
			try {
				Thread.sleep(1000);
			}
			catch(InterruptedException e){
				e.printStackTrace();
			}
		}
	}
	public static void main(String[] args) {
		ThreadClass t1 = new ThreadClass("Thread 1");
		ThreadClass t2 = new ThreadClass("Thread 2");
		t1.start();
		t2.start();

	}
}
