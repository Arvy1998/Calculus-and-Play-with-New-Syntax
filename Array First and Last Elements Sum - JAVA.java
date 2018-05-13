import java.util.Scanner;
public class Klase {
	public static void main(String args[]) {
		int seka[] = new int[10];
		int suma;
		Scanner ivestis = new Scanner(System.in);
		int n = ivestis.nextInt();
		for (int x = 0; x < n; x++) {
			seka[x] = ivestis.nextInt();
		}
		ivestis.close();
		suma = seka[0] + seka[n - 1];
		System.out.print(suma);
	}
}
