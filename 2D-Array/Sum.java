import java.util.Scanner;

public class Sum {
public static void main(String[] args) {
     int[][] arr = new int[2][3];
        int sum = 0;
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
               sum=sum+ arr[i][j];
            }
        }

        System.out.println("the sum is " + sum);
}
    
}