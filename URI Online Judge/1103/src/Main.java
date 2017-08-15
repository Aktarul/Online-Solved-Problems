import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int h1,m1,h2,m2;
		h1 = input.nextInt();
		m1 = input.nextInt();
		h2 = input.nextInt();
		m2 = input.nextInt();
		
		while((h1 != 0) || (m1 != 0 ) || (h2 != 0) || (m2 != 0)){
			if(m1 >= m2){
				m2 = m2 + 60;
				h1 = h1 +1;
			}
			if(h1 > h2){
				h2 = h2 + 24;
			}
			System.out.println((h2-h1)*60 + (m2-m1));

			h1 = input.nextInt();
			m1 = input.nextInt();
			h2 = input.nextInt();
			m2 = input.nextInt();
		}
	}

}
