import java.util.Scanner;
class Diamond_Shape {
	public static void main(String[] args) {
		char Diamond[][] = new char[101][101];
		int n, temp, inc;
		Scanner reader = new Scanner(System.in);
		n = reader.nextInt();
		temp = n / 2;
		inc = 0;
		for (int j = 1; j < temp + 1; j++) {
			for (int o = 0; o < n; o++) {
				Diamond[j][o] = '-';
				Diamond[j][temp - inc] = 'O';
				Diamond[j][temp + inc] = 'O';
				System.out.print(Diamond[j][o]);
			}
			inc++;
			System.out.println("");
		}
		inc = temp;
		for (int i = temp; i < n; i++) {
			for (int u = 0; u < n; u++) {
				Diamond[i][u] = '-';
				Diamond[i][temp - inc] = 'O';
				Diamond[i][temp + inc] = 'O';
				System.out.print(Diamond[i][u]);
			}
			inc--;
			System.out.println("");
		}
	}
}
