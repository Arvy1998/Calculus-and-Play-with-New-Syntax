import java.util.Scanner;
public class Klase {
	public static void main(String args[]) {
		int seka[] = new int[10];
		Scanner ivestis = new Scanner(System.in);
		int n = ivestis.nextInt();
		boolean RASTAS = false;
		int MAX;
		int count = 0;
		MAX = seka[0];
		for (int x = 0; x < n; x++) {
			seka[x] = ivestis.nextInt();
			if (seka[x] % 2 == 0 && seka[x] != 0) {
				count++;
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
		}
		ivestis.close();
		if (count != 0) {
			System.out.print(MAX);
		}
		else {
			System.out.print("Ne");
		}
	}
}
