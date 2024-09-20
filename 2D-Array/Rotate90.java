public class Rotate90 {

    public static int[][] transpose(int[][] arr) {
        int m = arr.length;
        int n = arr[0].length;
        int ans[][] = new int[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans[i][j] = arr[j][i];
            }
        }
        return ans;
    }

    public static void print(int arr[][]) {
        int m = arr.length;
        int n = arr[0].length;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.err.println();

        }
    }

    public static void main(String[] args) {
        int[][] arr = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
        transpose(arr);
        int m = arr.length;
        int n = arr[0].length;

        for (int i = 0; i < m; i++) {
            int start = 0;
            int end = m - 1;

            while (start <= end) {
                int temp = arr[i][start];
                arr[i][start] = arr[i][end];
                 arr[i][end] = temp;
                 start++;
                 end--;
            }

        }
        print(arr);

    }
}


// 1 2
// 3 4 
// 5 6

// 1 3 5
// 2 4 6

// 5 3 1
// 6 4 2