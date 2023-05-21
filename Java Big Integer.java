import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Solution {

    public static void main(String[] args) {
    Scanner sc = new Scanner (System.in);
    String a = sc.nextLine();
    String b = sc.nextLine();
    BigInteger A = new BigInteger(a);
    BigInteger B = new BigInteger(b);
    System.out.println(A.add(B));
    System.out.println(A.multiply(B));
    }
}
