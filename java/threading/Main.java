package threading;

public class Main {
    public static void main(String[] args) {
        SampleThread sampleThreadOne = new SampleThread();
        sampleThreadOne.start();

        SampleThread sampleThreadTwo = new SampleThread();
        sampleThreadTwo.start();
    }
}
