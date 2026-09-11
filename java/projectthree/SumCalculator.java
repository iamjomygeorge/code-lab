package projectthree;

public class SumCalculator{
    int num1, num2, sum;

    void calculateSum(){
        sum = num1 + num2;
    }

    void display(){
        calculateSum();
        System.out.print("The sum is: " +sum);
    }
}
