package day2;
//Write a function to perform a binary search on a sorted array of integers to find a target element.
public class binary {
    public static void main(String[] args) {
        int a[] = {1, 3, 5, 7, 9, 11, 13};
        boolean flag =false;
        int key = 7;
        int l = 0;
        int h = a.length-1;
         
        while (l <=  h)
        {
           int m = (l+h)/2;    
           
           if(a[m]== key)
           {
            System.out.println("element found..");
            flag  = true;
            break;
           }

           if(a[m]<key){
            l = m +1;
           }
           if(a[m]<key){
            h = m-1;
           }
        }
        if(flag == false){
            System.out.println("element not found..");
        }
    }
}
