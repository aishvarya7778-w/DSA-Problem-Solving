// Finding the first and last index of the repeated element in java


import java.util.Scanner;
public class Hello3 {
    public static int[] FirstLastIndex(int arr[], int n, int key){
        int start = 0, end = n-1, mid, first= -1, last=-1;

        while(start<=end){
            mid = start + (end-start)/2;

            if(arr[mid]==key){
                first = mid;
                end = mid-1;
            }
            else if(arr[mid]<key){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }

        start = 0;
        end =n-1;
        while(start<=end){
            mid = start + (end-start)/2;

            if(arr[mid]==key){
                last = mid;
                start = mid+1;
            }
            else if(arr[mid]<key){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return new int[]{first, last};
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n, key;
        
        System.out.println("enter the size of arrray: ");
        n = sc.nextInt();

        int arr[] = new int[n];

        System.out.println("enter the elements of array: ");
        for(int i =0; i<n; i++){
             arr[i] = sc.nextInt();
        }

        System.out.println("enter the key: ");
        key = sc.nextInt();

        Hello3 bs = new Hello3();
        int[] result = bs.FirstLastIndex(arr, n, key);

        System.out.println(result[0]+ ","+result[1]);



    }
}
// Output - 
// enter the size of arrray: 
// 6
// enter the elements of array: 
// 1 2 3 3 3 4
// enter the key: 
// 3
// 2,4