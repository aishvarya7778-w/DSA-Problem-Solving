
// binary search problem in java

import java.util.*;
public class hello2 {

    public static int BinarySearch(int arr[], int n, int key){
        int start=0, end=n-1, mid;

        while(start<=end){
            mid = start + (end-start)/2;

            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]<key){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n,key;

        System.out.println("enter the size of array");
        n = sc.nextInt();

        int arr[] = new int[n];

        System.out.println("enter thr element of array: ");
        for(int i = 0; i<n ; i++){
            arr[i]= sc.nextInt();
        }

        System.out.println("enter the key");
        key = sc.nextInt();

        hello2 BS = new hello2();
       

        System.out.println(BS.BinarySearch(arr, n, key));


    }
}
