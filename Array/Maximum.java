public class Maximum {
    public static int maximumarr(int arr[]){
        int max=Integer.MIN_VALUE;
        for (int i=0;i<arr.length;i++){
            if(arr[i]> max){
                max=arr[i];
            }

        }
        return max;
    }
    public static void main(String[] args) {
        int[] arr={1,2,3,4,5,6};
        maximumarr(arr);
        System.out.println("the maximum is " + maximumarr(arr));
    }
}
