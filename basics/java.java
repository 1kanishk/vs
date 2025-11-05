
// ways of passing arguments 
// 1. call by value
// 2. call by reference

// public class java { // PASS BY REFERENCE


//     static class box{
//         int value = 10;
//     }
    
//     static class demo{
//         void modify(box b){
//             b.value = 20;
//         }
//     }

//     public static void main(String[] args) {
        
//         box b = new box();
//         demo d = new demo();
//         d.modify(b);
//         System.out.println(b.value);

//     }
// }

//===================================================================================================================================================================

// public class java { // PASS BY VALUE

//     void change(int val){
//         val = val + 10;
//     }
//     public static void main(String[] args) {
//         int x = 1;
//         java j = new java();
//         j.change(x);
//         System.out.println(x);

//     }
// }

//===================================================================================================================================================================

// class Animal { // METHOD OVER-RIDING 
//     void sound() {
//         System.out.println("Animal makes sound");
//     }
// }
// class Dog extends Animal {
//     void sound() {
//         System.out.println("Dog barks");
//     }
// }
// public class java {
//     public static void main(String[] args) {
//         Animal a = new Dog();
//         a.sound();  // Output: Dog barks
//     }
// }
