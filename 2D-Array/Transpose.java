// write a program to print the transpose of the matrix entered by the user and store in a new matrix

// 1 2 
// 3 4 
// 5 6 

public class Transpose {
    public static void main(String[] args) {
        int[][] arr = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
        int m=arr.length;
        int n=arr[0].length;
        int transpose[][]=new int [n][m];
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                transpose[i][j]=arr[j][i];
            }
            System.out.println();
        }
    }
}

//print tarsnpose matrix then 
