import java.util.Scanner;
public class Klase {
	public static void main(String args[]) {
		int seka[] = new int[10];
		Scanner ivestis = new Scanner(System.in);
		int n = ivestis.nextInt();
		for (int x = 0; x < n; x++) {
			seka[x] = ivestis.nextInt();
		}
		ivestis.close();
		System.out.print(seka[0]);
	}
}
