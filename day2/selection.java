package day2;
// Write a function to perform a binary search on a sorted array of integers to find a target element.
class Sorting {
    public static void printArray(int arr[]) {
        for(int i=0; i<arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
 
 
    public static void main(String args[]) {
        int arr[] = {5, 3, 8, 2, 7, 1, 6, 4};
 
 
        //selection sort
        for(int i=0; i<arr.length-1; i++) {
            int smallest = i;
            for(int j=i+1; j<arr.length; j++) {
                if(arr[j] < arr[smallest]) {
                    smallest = j;
                }
            }
            //swap
            int temp = arr[smallest];
            arr[smallest] = arr[i];
            arr[i] = temp;
        }
 
 
        printArray(arr);
    }
} 