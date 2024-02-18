import java.util.Arrays;

public class bubble {
    /* n = 5
     * passes = n - 1
     * no. of required passes = 4
     */ 
    public static void main(String[] args) {
        int a[] = { 4 , 2 , 1 , 5 , 3 };
        //          0   1   2   3   4
        //          n  n+1         n-1
        System.out.println("Array before sorting" + Arrays.toString(a));
        //               Arrays.toString(a) is use to print whole array
        int n = a.length;
        for(int i = 0; i < n - 1; i++)  // number of passes n - 1
        {
            for(int j = 0; j < n - 1; j++) // Itreation in each pass
            {
               if(a[j] > a[j+1])
               {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
               }
            }
        }
        System.out.println("Array After sorting" + Arrays.toString(a));
    }
}
