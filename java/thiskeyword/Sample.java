package thiskeyword;

public class Sample{
    int a = 100, b = 500;

    Sample(int x, int y){
        int temp = x;
        x = y;
        y = temp;

        this.a = x;
        this.b = y;
    }

    void printFunction(){
        System.out.println(a +" "+b);
    }
}
