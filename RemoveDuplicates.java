

import java.util.Scanner;
class RemoveDuplicates{
public int removeDuplicates(int[] nums, int n) {
        n= nums.length;
        int i = 0;
        for(int j = 1; j<n; j++){
          if(nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            i++;
          }
           
        }
        return i+1;
    }
     
public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n;
    
    System.out.println("enter the size of array: ");
    n= sc.nextInt();

    int nums[] = new int[n];

    System.out.println("enter the element of array: ");
    for(int i = 0; i<n ; i++){
            nums[i]= sc.nextInt();
        }

RemoveDuplicates Rd = new RemoveDuplicates();


System.out.println("final array: ");
int k = Rd.removeDuplicates(nums,n);
for(int i =0; i<k; i++){
    System.out.print(nums[i]+" ");
}
}    
}


