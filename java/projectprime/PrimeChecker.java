package projectprime;

public class PrimeChecker{
    void primeChecker(int number){
        if(number < 2){
            System.out.println("Not prime.\n");
            return;
        }
        else if(number == 2){
            System.out.println("Prime!\n");
            return;
        }

        int flag = 0;
        for(int i=2; i<number; i++){
            if(number % i == 0){
                flag = 1;
                break;
            }
        }
        switch(flag){
            case 0:
                System.out.println("Prime!\n");
                break;
            case 1:
                System.out.println("Not prime.\n");
                break;
            default:
                System.out.println("Unknown error occured.");
        }
    }
}
