import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int x1, y1, x2, y2;
		x1 = input.nextInt();
		y1 = input.nextInt();
		x2 = input.nextInt();
		y2 = input.nextInt();

		while (!((x1==0) && (x2==0) && (y1==0) && (y2==0))) {
			if ((x1 == x2) && (y1 == y2)) {
				System.out.println("0");
			} else if ((x1 == x2) || (y1 == y2)) {
				System.out.println("1");
			} else if (java.lang.Math.abs(x1 - x2) == java.lang.Math.abs(y1 - y2)) {
				System.out.println("1");
			} else {
				System.out.println("2");
			}
			x1 = input.nextInt();
			y1 = input.nextInt();
			x2 = input.nextInt();
			y2 = input.nextInt();
		}
	}

}
