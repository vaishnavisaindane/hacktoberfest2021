import java.util.*;
import java.lang.*;

public class MaxConsecutiveOnes{
  public static int maxConsecutiveOnes(int [] arr){
    int res = 0, curr=0;
    int n = arr.length;
    for(int i=0 ; i<n ; i++){
      if(arr[i] == 0){
        curr = 0;
      }
      else{
        curr++;
        res = Math.max(res, curr);
      }
    }
    return res;
  }
  public static void main(String [] args){
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the length of binary array : ");
    int n = sc.nextInt();
    int [] arr = new int[n];
    System.out.println("Enter array elements");
    for(int i=0 ; i<n ; i++){
      arr[i] = sc.nextInt();
    }
    int max = maxConsecutiveOnes(arr);
    System.out.println("Maximum consecutive ones in the given binary array : " + max);
    sc.close();
  }
}
