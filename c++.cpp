// #include<iostream>
// using namespace std;

//     int yo(int x,int y){
//         return x+y;
//     }

// int main(){
//                                                                              //FUNCTION
//     int a,b;

//     cout<<"enter value of a = ";
//     cin>>a;

//     cout<<"enter value of b = ";
//     cin>>b;

//     cout<<"sum of a and b is = " << yo(a,b);
//     return 0;
// }

// ====================================================================================================================================================================

// #include<iostream>
// using namespace std;
// //                                                                         //SUM of n number
// int main(){
//     int sum=0,n;

//     cout<<"enter the number where you wanna get sum = ";
//     cin>>n;

//    for (int i = 0; i <= n; i++)
//    {
//     sum = sum + i;
//    }

//    cout<<"sum = "<<sum;
//     return 0;
// }

// ====================================================================================================================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     //                                                                    //CALCULATOR
//     char cal;
//     int a,b;

//     cout<<"enter value of a = ";
//     cin>>a;
//     cout<<"enter value of b = ";
//     cin>>b;

//     cout<<"choose operator (+,-,*,/) = ";
//     cin>>cal;

//     switch (cal)
//     {
//     case '+':
//         cout<<"result = " <<a + b <<endl;
//         break;
//     case '-':
//         cout<<"result = " <<a - b <<endl;
//         break;
//     case '*':
//         cout<<"result = " <<a * b <<endl;
//         break;
//     case '/':
//         cout<<"result = " <<a / b <<endl;
//         break;

//     default:
//         break;
//     }

//     return 0;
// }

//====================================================================================================================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     //                                                                  //IF - ELSE age prob
//     int age;
//     cout<<"enter your age = ";
//     cin>>age;

//     if(age < 18)
//     cout<<"You cannot drive";
//     else if(age > 60)
//     cout<<"you cannot drive";
//     else
//     cout<<"you can drive";

//     return 0;
// }

//====================================================================================================================================================================

// #include <iostream>
// using namespace std;
// int main()
// //                                                                      //DECIMAL TO BINARY
// {
//     int ans = 0, decnum, rem, pow = 1;

//     cout << "enter a decimal num = ";
//     cin >> decnum;

//     while (decnum > 0)
//     {
//         rem = decnum % 2;
//         decnum = decnum / 2;
//         ans += (rem * pow);
//         pow = pow * 10;
//     }

//     cout << "ans = " << ans;

//     return 0;
// }

//====================================================================================================================================================================

// #include <iostream>
// #include <string>
// using namespace std;
//                                                                             //OOPS
// class teacher
// {
//     public:
//     string name;
//     string subject;
//     string dept;
//     double salary;
// };

// int main()
// {
//     teacher t1;
//     t1.name = "kanishk";
//     t1.subject = "Mathematics";
//     t1.dept = "Science";
//     t1.salary = 2200.44;

//     teacher t2;
//     t2.name = "kunal";
//     t2.subject = "science";

//     cout << "Teacher Details:" << endl;
//     cout << "Name: " << t2.name << endl;
//     cout << "Subject: " << t2.subject << endl;
//     cout << "Department: " << t1.dept << endl;
//     cout << "Salary: " << t1.salary << endl;

//     return 0;
// }

//====================================================================================================================================================================

// #include <iostream>
// using namespace std;
// //                                                                       //SWAPPING
// int swap(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     // cout<<"inside swapping a = " << a << " b = " << b << endl;

// }

// int main()
// {
//     int x = 10,y = 5;
//     cout<<"before swapping x = " << x << " and y = " << y << endl;
//     swap(&x,&y);
//     cout<<"after swapping x = " << x << " and y = " << y << endl;

//     return 0;
// }

//====================================================================================================================================================================

// #include <iostream>
// using namespace std;
// //                                                                        //RECURSION
// int fact(int n)
// {
//     if(n==0)
//     return 1;
//     else
//     return n * fact(n - 1);
// }

// int main()
// {
//     cout<<fact(3);
//     return 0;

//====================================================================================================================================================================

// #include <iostream>
// #include<string>
// using namespace std;

// //                                                                      //CLASS EXAMPLE
// class Kanishk{
//     public:
//     string full_name;
//     string course;
//     int id;

//     void display(){
//         cout<<"Name = "<<full_name<<endl;
//         cout<<"Course = "<<course<<endl;
//         cout<<"Id = "<<id<<endl;
//     }

// };

// int main()
// {
//     Kanishk kanishk;
//     kanishk.full_name = "kanishk jain";
//     kanishk.course = "BCA";
//     kanishk.id = 256;
//     kanishk.display();
//     return 0;
// }

//====================================================================================================================================================================

// #include <iostream>
// using namespace std;

// class teacher{
//     public:
// //                                                                      //CONSTRUCTOR
//     string name;
//     int id;

//     teacher(){
//         cout<<"hello"<<endl;
//     }

//     teacher(int i,string n){
//         this->name = n;
//         this->id = i;

//     }


//     int show(){
//         cout<<"name = "<<name<<endl;
//         cout<<"id = "<<id;
//     }

// };

// int main()
// {
//     teacher t(44,"kanishk");
//     t.show();

//     return 0;
// }

//====================================================================================================================================================================

// #include <iostream>
// using namespace std;
// //                                                                      // INHERITENCE
// class teacher {
// public:
//     string name;
//     int age;
// };

// class student : public teacher {
// public:
//     int roll;

//     void show()
//     {
//         cout << "name = " << name << endl;
//         cout << "age = " << age << endl;
//         cout << "roll = " << roll << endl;
//     }
// };

// int main() {
//     student s;
//     s.age = 12;
//     s.name = "kanishk";
//     s.roll = 444;
//     s.show();

//     return 0;
// }

//====================================================================================================================================================================

// #include <iostream>
// using namespace std;

// class student{
//                                                                           //PRIVATE ACCESS
//     private:
//     int a,b,c;

//     public:
//     string name;
//     int id;

//     student(int a1 ,int b1 ,int c1);

//     void show(){
//         cout<<"name = "<<name<<endl;
//         cout<<"id = "<<id<<endl;
//         cout<<"a = "<<a<<endl;
//         cout<<"b = "<<b<<endl;
//         cout<<"c = "<<c<<endl;
//     }

// };

// student :: student(int a1 ,int b1 ,int c1){
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main()
// {
//     student s(5,4,3);
//     s.name = "kanishk";
//     s.id = 6775;
//     // s.student(4,5,7);
//     s.show();
//     return 0;
// }

//====================================================================================================================================================================

// #include <iostream>
// using namespace std;
// int main() //                                                               FILE OPERATION
// {
//     FILE *f;
//     char n;
//     f = fopen("file.txt", "w");
// cout<<("enter data - ");
// while((n = getchar()) != EOF)
// {
//     putc(n,f);
// }
//     fclose(f);
//     cout<<("data entered succesfully")<<endl;
//     cout<<("your data - ");
//     f = fopen("file.txt","r");
//     while((n = getc(f)) != EOF)
//     {
//         cout<<(n);
//     }
//     fclose(f);

//     return 0;
// }

//====================================================================================================================================================================

// #include <iostream>
// using namespace std;

// class kanishk
// {
//                                                                      //celsius to fahrenheit (C - F)
// public:
//     float c;

//     void fun()
//     {

//         float f = (c * 9 / 5) + 32;
//         cout << "celsius to fahrenheit = " << f;
//     }
// };

// int main()
// {
//     kanishk k;
//     cout << "enter celsius = ";
//     cin >> k.c;
//     k.fun();
//     return 0;
// }

//===================================================================================================================================================================

// #include <iostream>
// using namespace std;
// //                                                                          //CONSTRUCTORS
//     class kanishk
//     {
//         public:
//         string name;
//         int age;

//         kanishk(){ // default constructor
//             cout<<"default constructor"<<endl;
//         }

//         kanishk(string name, int age) // parameterized cnstructor
//         {
//             this->name = name;
//             this->age = age;
//         }

//         kanishk(const kanishk &obj){
//             this->name = obj.name;
//             this->age = obj.age;
//         }

//         void fun(){
//             cout<<"age = "<<age<<endl;
//             cout<<"name = "<<name<<endl;
//         }

//     };

// int main()
// {
//     kanishk k1("jay" , 44);
//     // k1.fun();

//     kanishk k2 = k1; // custom COPY constructor
//     k2.fun();

//     return 0;
// }

//===================================================================================================================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter a number u want to get reverse of = ";
//     cin>>n;
// //                                                                        REVERSE OF NUMBER
//     int reverse = 0;
//     while (n != 0)
//     {
//         int lastdigit = n % 10;
//         reverse = reverse * 10 + lastdigit;
//         n = n/10;
//     }

//     cout<<"reverse = "<<reverse;

//     return 0;
// }

//===================================================================================================================================================================

// #include <iostream>
// #include <cmath>
// using namespace std;
// //                                                                        ARMSTRONG NUMBER
// class arm
// {
// public:
//     int n;

//     int armstrong(int n)
//     {
//         int orignaln = n;
//         int sum = 0;

//         while (n != 0)
//         {
//             int lastdigit = n % 10;
//             sum += pow(lastdigit, 3);
//             n = n / 10;
//         }

//         if (sum == orignaln)
//         {
//             cout << "number is armstrong!";
//         }
//         else
//         {
//             cout << "number is not armstrong!";
//         }
//     }
// };

// int main()
// {
//     arm a;
//     cout << "enter number = ";
//     cin >> a.n;
//     a.armstrong(a.n);

//     return 0;
// }

//===================================================================================================================================================================
// #include <iostream>

// using namespace std;
//                                                                             PRIME NUMBER
// // Function to check if a number is prime
// int isPrime(int num) {
//     if (num <= 1) return 0;
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) return 0;
//     }
//     return 1;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
    
//     // Check if the number is prime and print the result
//     if (isPrime(num))
//         cout << num << " is a prime number." << endl;
//     else
//         cout << num << " is not a prime number." << endl;
    
//     return 0;
// }

//===================================================================================================================================================================

// #include <iostream>
// #include <cstring>
// using namespace std;
// class String {
//     char str[100];
// public:
// //                                                             STRING CONCATENATION
//     String(const char* s = "")
//     {
//         strcpy(str, s);
//     }

//     String operator+(const String &s) {
//         String temp;
//         strcpy(temp.str, str);
//         strcat(temp.str, s.str);
//         return temp;
//     }

//     void display()
//     {
//         cout << str << endl;
//     }
// };
// int main()
// {
//     String s1("helloooo "), s2("There");
//     (s1 + s2).display();
//     return 0;
// }

//===================================================================================================================================================================

// #include <iostream>
// using namespace std;
// //                                                               records of account holders
// class account
// {
// public:
//     int acc_id;
//     string name;
//     int balance;

//     void showdata()
//     {

//         cout << "name - " << name << endl
//              << "acc_id - " << acc_id << endl
//              << "balance - " << balance << endl ;
//     }
// };

// int main()
// {
//     account acc[2];

//     for (int i = 0; i < 2; i++)
//     {
//         cout << "enter your name = ";
//         cin >> acc[i].name;
//         cout << "enter your acc_id = ";
//         cin >> acc[i].acc_id;
//         cout << "enter your balance = ";
//         cin >> acc[i].balance;
//     }
//     cout << "your data :-" << endl;
//     for (int j = 0; j < 2; j++)
//     {
//         acc[j].showdata();
//     }

//     return 0;
// }

//===================================================================================================================================================================

// #include <iostream>
// using namespace std;

// class B; // Forward declaration of class B

// class A
// {
//     int numA;

// public:
//     A(int x)
//     {
//         numA = x;
//     }

//     friend void showData(A, B); // Declaring friend function
// };

// class B
// {
//     int numB;

// public:
//     B(int y)
//     {
//         numB = y;
//     } // Constructor to initialize numB
//     friend void showData(A, B); // Declaring friend function
// };

// // Friend function definition
// void showData(A objA, B objB)
// {
//     cout << "Value in class A: " << objA.numA << endl;
//     cout << "Value in class B: " << objB.numB << endl;
// }

// int main()
// {
//     A obj1(10); // Creating an object of class A
//     B obj2(20); // Creating an object of class B

//     showData(obj1, obj2); // Calling friend function
//     return 0;
// }
