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