import java.util.Scanner;

public class AddTillLimit {
    public static void main(String[] args){
        System.out.print("Enter a limit: ");
        Scanner scanner = new Scanner(System.in);
        int limit = scanner.nextInt();
        scanner.close();
        int result = 0;

        for(int i=1; i<=limit; i++){
            result += i;
        }

        System.out.print(result);
    }
}
