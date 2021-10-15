/**
 22.The MOBIUS function M(N)for a natural number N is defined as
    follows: M(N) = 1 if N = 1 [Condition 1]
    M(N) = 0 if any prime factor of N is contained in N more than once
    [Condition2] M(N) = (-1)p
    if N is a product of ‘p’ distinct prime factors [Condition
    3]
    Example :
    M(46) = 1 ( for 46 = 2 * 23 M(46) = ( -1)2 = 1 )
    M(45) = 0 ( for 15 = 3 * 3 * 5 M(45) = 0 as 3 appears two times)
    M(11) = -1 ( for 11 = 11 M(11) = ( -1)1 = -1
 */
import java.util.*;
public class MobiusFunction
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number");
        int num=sc.nextInt(),p=0,flag=0;
        if(num==1)  
        {
            System.out.println("M(1)="+ 1);
            flag=1;
        }
        else
        {
            outer: 
            for(int i=1;i<num;i++)
            {
                if(num%i==0)
                {   
                    int c=0;
                    for(int k=1;k<i;k++)   
                    {
                        if(i%k==0) c++;         //checking prime
                    }
                    if(c==1) //prime condition
                    {
                        int count=0, ncopy=num;
                        while(ncopy%i==0)
                        {
                            count++;
                            ncopy/=i;
                        }
                        if(count==1)   p++;     //COUNT NO. OF DISTINCT PRIME NO.S
                        else 
                        { 
                            System.out.println("M("+ num+") = 0");
                            flag=1;
                            break outer;
                        }
                    }
                }
            }
        }
        if(flag!=1)System.out.println("M("+num+") ="+"(-1)^"+p+"="+(int)Math.pow(-1,p));
    }
}
/*
 * Enter a number
46
M(46) =(-1)^2=1
 */
