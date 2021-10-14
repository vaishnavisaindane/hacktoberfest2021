
// Java program for Pascal's Triangle
// Pascal’s triangle is a triangular array of the binomial coefficients. Write a function that takes an integer value n as input and prints first n lines of the Pascal’s triangle. Following are the first 6 rows of Pascal’s Triangle.
// Input = 6
// Output:
// 1  
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 
// 1 5 10 10 5 1 
// Time Complexity: O(n^2)
// Space Complexity: O(1) 
import java.io.*;

class pascalTriangle {

    // Pascal function
    public static void printPascal(int n) {
        for (int line = 1; line <= n; line++) {

            int C = 1;// used to represent C(line, i)
            for (int i = 1; i <= line; i++) {
                // The first value in a line is always 1
                System.out.print(C + " ");
                C = C * (line - i) / i;
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int n = 5;
        printPascal(n);
    }
}
