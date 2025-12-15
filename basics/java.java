// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class Person {
    // Attributes
    private String name;
    private int age;

    // Setter methods
    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    // Getter methods
    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }
}

public class java {
    public static void main(String[] args) {

        // Creating first Person object
        Person p1 = new Person();
        p1.setName("Rahul");
        p1.setAge(25);

        // Creating second Person object
        Person p2 = new Person();
        p2.setName("Anita");
        p2.setAge(30);

        // Displaying values
        System.out.println("Person 1: " + p1.getName() + ", Age: " + p1.getAge());
        System.out.println("Person 2: " + p2.getName() + ", Age: " + p2.getAge());
    }
}
