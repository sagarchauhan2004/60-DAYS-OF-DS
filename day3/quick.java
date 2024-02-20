package day3;
//Implement the quick sort algorithm to sort an array of integers.

//  here we do pivot and partition 
public class quick {
    public static int partition(int arr[], int low , int high ){
        int pivot = arr[high];
        int i = low - 1;

        for(int j = low ; j < high; j ++ ){
            if(arr[j] < pivot){
                i++;
                // swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        i++;
        int temp =arr[i];
        arr[i] = arr[high];
        arr[high] = temp;
        return i; //pivot index
    }
    public static void quicksort(int arr[], int low, int high){
        if(low < high){
            int pi = partition(arr, low , high);

            quicksort(arr, low , pi-1);
            quicksort(arr, pi+1, high);
        }
    }
    public static void main(String[] args) {
      int[] arr = {5, 3, 8, 2, 7, 1, 6, 4};
      int n = arr.length;
      quicksort(arr, 0 , n-1);

      for(int i  = 0 ; i < n ; i++){
        System.out.print( arr[i]+" ");
      }
      System.out.println();
    }
}
