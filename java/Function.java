import java.util.Scanner;

public class Function {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter num1: ");
        int num1 = scanner.nextInt();
        System.out.print("Enter num2: ");
        int num2 = scanner.nextInt();
        scanner.close();

        int sum = sumFunction(num1, num2);
        System.out.print("\nThe sum of "+num1+" + "+num2+" is: "+sum);
    }

    static int sumFunction(int a, int b){
        int sum = a + b;
        return sum;
    }
}
