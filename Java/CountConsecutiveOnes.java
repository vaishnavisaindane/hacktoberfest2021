// This is Java program to count maximum consecutive 1's in a given binary array.
public class CountConsecutiveOnes {
    public static int findMaxConsecutiveOnes(int[] nums) {
        int currentCount = 0; // initialize currentCount
        int maxCount = 0; //initialize maxCount

        //if 1 is found, increment currentCount and update results if currentCount becomes more
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 1){
                currentCount++;
                if (currentCount > maxCount){
                    maxCount = currentCount;
                }
            }
            //reset currentCount if zero is found
            else {
                currentCount = 0;
            }
        }
        return maxCount;
    }

    //The main Method
    public static void main(String[] args) {
        int[] array = {1,0,1,1,1,1,1,1,1};
        int n = array.length;
        System.out.println("The number of consecutive 1's is: " + findMaxConsecutiveOnes(array));
        System.out.println("The array is made up of " + n + " elements");
        System.out.println("end of program");
    }
}
