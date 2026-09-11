package projectone;

public class CoreOOP {
    public static void main (String[] args) {
        Sample sampleOne = new Sample();
        Sample sampleTwo = new Sample();

        sampleOne.a = 20;
        sampleTwo.a = 50;

        sampleOne.b = 100;
        sampleTwo.b = 200;

        System.out.print("Sample one a: " +sampleOne.a+ "\nSample two a: " +sampleTwo.a+ "\nSample one b: " +sampleOne.b+ "\nSample two b: " +sampleTwo.b);
    }
}
