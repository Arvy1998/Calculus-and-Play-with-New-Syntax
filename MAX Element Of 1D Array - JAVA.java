import java.util.Scanner;
public class Klase {
	public static void main(String args[]) {
		int seka[] = new int[10];
		Scanner ivestis = new Scanner(System.in);
		int n = ivestis.nextInt();
		boolean RASTAS = false;
		int MAX = 0;
		for (int x = 0; x < n; x++) {
			seka[x] = ivestis.nextInt();
			if (RASTAS == true) {
			if (seka[x] > MAX) {
				MAX = seka[x];
				}
			}
			else {
				MAX = seka[x];
				RASTAS = true;
			}
		}
		ivestis.close();
		System.out.print(MAX);
	}
}
