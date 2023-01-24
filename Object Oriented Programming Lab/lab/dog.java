package lab;
public class dog {
    private String name;
    private int age;

    public dog(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void speak() {
        System.out.println("iam" + this.name + "and i am" + this.age + "years old");

    }

   public void getage() {
         this.age = age;
    }
}
