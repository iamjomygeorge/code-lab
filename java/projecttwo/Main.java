package projecttwo;

public class Main {
    public static void main(String[] args){
        SampleClass sampleclassone = new SampleClass();
        sampleclassone.num1 = 10;
        sampleclassone.num2 = 100;

        SampleClass sampleclasstwo = new SampleClass();
        sampleclasstwo.num1 = 20;
        sampleclasstwo.num2 = 200;

        sampleclassone.display();
        sampleclasstwo.display();
    }
}
