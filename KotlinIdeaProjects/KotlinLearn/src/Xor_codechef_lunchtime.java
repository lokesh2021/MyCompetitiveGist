import java.math.BigInteger;
import java.util.Scanner;

import static java.math.BigInteger.*;

public class Xor_codechef_lunchtime {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t!=0)
        {
            BigInteger x = sc.nextBigInteger();
            BigInteger y = sc.nextBigInteger();
            BigInteger n = sc.nextBigInteger();

            for (BigInteger bi = n;
                 bi.compareTo(ZERO) > 0;
                 bi = bi.subtract(ONE)) {

                if((ZERO.compareTo(bi)&&bi.compareTo(n))&&(valueOf(x).xor(bi).compareTo(valueOf(y).xor(bi))))
                {

                }
            }

            /*for(int i = 0; i<=BigInteger.valueOf(n); i++)
            {
                if((i>=0&&i<=n)&&((x^i)<(y^i)))
                {
                    count++;
                }
            }
            cout<<count<<endl;*/
        }

    }
}
