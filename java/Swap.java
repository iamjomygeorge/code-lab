import java.util.Scanner;

public class Swap{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int a, b;
        System.out.print("a = ");
        a = scanner.nextInt();
        System.out.print("b = ");
        b = scanner.nextInt();

        int temp;
        temp = a;
        a = b;
        b = temp;

        System.out.print("\na = " +a+ " and b = " +b);
        scanner.close();
    }
}
