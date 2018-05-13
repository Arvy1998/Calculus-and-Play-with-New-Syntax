import java.text.DecimalFormat;
import java.util.Scanner;
public class Klase {
	public static void main(String args[]) {
		DecimalFormat formatavimas = new DecimalFormat("#0.00");
		double seka[] = new double[10];
		double suma = 0;
		double count = 0;
		double vidurkis;
		Scanner ivestis = new Scanner(System.in);
		int n = ivestis.nextInt();
		for (int x = 0; x < n; x++) {
			seka[x] = ivestis.nextInt();
			suma = suma + seka[x];
			count++;
		}
		ivestis.close();
		vidurkis = suma / count;
		System.out.print(formatavimas.format(vidurkis));
	}
}
