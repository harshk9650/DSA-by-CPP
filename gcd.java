package ArrayQuestions;

public class gcd {
    static void main() {
        int a=36,b=18;
        while(b!=0)
        {
            int temp=b;
            b=b%a;
            a=temp;
        }
        System.out.println(a);

    }
}
