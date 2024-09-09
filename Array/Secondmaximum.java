public class Secondmaximum {
    public static int secondmaximumarr(int arr[]){
        int max=Integer.MIN_VALUE;
        int secondmax=Integer.MIN_VALUE;
        
        for (int i=0;i<arr.length;i++){
            if(arr[i]> max){
                max=arr[i];
            }

        }
        for (int i=0;i<arr.length;i++){
            if(arr[i] != max){
                secondmax=arr[i];
            }

        }
        return secondmax;
       
    }
    public static void main(String[] args) {
        int[] arr={1,2,3,4,5,6};
        secondmaximumarr(arr);
        System.out.println("the maximum is " + secondmaximumarr(arr));
    }
}
