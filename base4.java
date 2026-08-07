import java.util.Scanner;

public class main
{
    static int reverse(int n)
    {
        int rev = 0;
        while (n != 0)
        {
            int rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        return rev;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[] = new int[n];

        for (int i=0; i < n; i++)
        {
            a[i] = sc.nextInt();
            int temp[] =new int[n];

            int k=0;
            for(i=0;i<n;i++)
            {
                while(a[i]!=0)
                {
                    int rem = a[i]%4;
                    temp[k]=temp[k]*10+rem;
                    a[i]=a[i]/4;
                }
                temp[k]=reverse(temp[k]);
                System.out.print(temp[k]+" ");
                k++;
            }
        }
        sc.close();
    } 
}
