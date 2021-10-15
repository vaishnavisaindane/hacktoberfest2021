// Describe the working of the Pascal's Triangle 
// Follow up with an efficient implementation in JavaScript

// Explanation:
// Pascal's Triangle is a triangular form of arrangement of numbers 
// that denotes the coefficients of the terms in the algebraic 
// expression (a + b) ^ n
// Also,
//  - it consists of (n + 1) terms in total
//  - it cosists of n rows in total
//  - marking parallel shallow diagonals and adding the terms on it 
//      makes the fibonacci series

// Implementation:
// - Bruteforce approach (Time Complexity = O (n ^ 3)
    function pascalsTriangle(n)
    {
        // Iterate through all rows and print corresponding entries
        for (let row = 0; row < n; row ++)
        {
            // Every row has total terms equal to row number
            printRows(row);
            document.write("<br />");
        }
    }
    
    function printRows(rowNum) {
        for (let i = 0; i <= rowNum; i++)
            document.write(binomialCoefficients(rowNum, i) + " ");
    }
    
    function binomialCoefficients(rowNum, k) {
        let res = 1;
         
        if (k > (rowNum - k)) k = (rowNum - k);
             
        for (let i = 0; i < k; ++i)
        {
            res *= (rowNum - i);
            res /= (i + 1);
        }
        return res;
    }

// - Efficient approach (Time Complexity = O (n ^ 2)
    function pascalsTriangle(n) {
        for (row = 1; row <= n; row ++)
        {
            var coeff = 1; // The first value in a row is always 1
            for (term = 1; term <= row; term ++)
            {
                document.write(coeff + " ");
                coeff = coeff * (row - term) / term;
            }
            document.write("<br />");
        }
    }
    
// used the formula:
// coeff(line, i) = coeff(line, i - 1) * (line - i + 1) / i
