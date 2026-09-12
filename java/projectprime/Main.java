package projectprime;

public class Main{
    public static void main(String[] args){
        GetNumber getnumber = new GetNumber();
        PrimeChecker primechecker = new PrimeChecker();

        int number = getnumber.getNumber();
        primechecker.primeChecker(number);
    }
}
