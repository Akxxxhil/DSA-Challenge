public class LinearSarch {

    public static boolean LinearSearch(int arr[],int target){
        for (int i=0;i<arr.length;i++){
            if(arr[i]==target){
                return true;
                
            }
        }
        return false;
    }

    public static void main(String[] args) {
        int [] arr={1,2,3,4,5,6};
        int x=-3;
        LinearSearch(arr, x);
        System.out.println(LinearSearch(arr, x));

    }
}