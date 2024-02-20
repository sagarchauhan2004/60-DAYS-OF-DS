package day3;
//Implement the insertion sort algorithm to sort an array of integers.
public class insertion {
    public static void main(String[] args) {
        int arr[] = { 5 , 3 , 8 , 2 , 7 , 1 , 6 , 4 };
          
        System.out.println("unsorted array :");
        for(int i  = 0 ; i < arr.length; i++)
            System.out.print(arr[i] + " ");
        
        for(int i = 1 ; i < arr.length; i++){
            int key = arr[i];
            int j = i - 1;

            while(j >= 0 && arr[j] > key ){
                arr[j+1] = arr[j];
                j = j - 1 ;
            }
            arr[j+1] = key;
        }
        System.out.println();
        System.out.println("sorted array :");
        for(int i  = 0 ; i < arr.length; i++)
            System.out.print(arr[i] + " ");
        
    }
}
