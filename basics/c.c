// #include<stdio.h>

// int main(){

//     int a = 131;                                                //pointer basic
//     int *ptra = &a;

//     printf("a is : %d\n",*ptra); //  print the value of a

//     printf("%d\n",&a); // printf address of a
//     printf("%d\n",ptra); // print address of a

//     printf("%d\n",&ptra); // print address of pointer

//     printf("%d\n",a);
//     return 0;
// }

// =============================================================================================================

// #include<stdio.h>
// #include<math.h>

// //declare
// float circlearea(float pi, float r );
// float cylinderarea(float pi,float r,float h);
// float cubearea(float a);

// int main(){
// float pi = 3.14,radius,areacircle,height,areacylinder,side,areacube;

// printf("enter the value of radius : ");
// scanf("%f",&radius);

// printf("enter the value of height : ");
// scanf("%f",&height);

// printf("enter the lenght of side of cube : ");
// scanf("%f",&side);

// //call
// areacircle = circlearea(pi,radius);
// areacylinder = cylinderarea(pi,radius,height);
// areacube = cubearea(side);

// printf("area of circle is : %f\n",areacircle);
// printf("area of cylinder is : %f\n",areacylinder);
// printf("area of cube is : %f\n",areacube);
// }

// //define
// float circlearea(float pi,float r){
//     return pi * pow(r,2);
// }

// float cylinderarea(float pi,float r,float h){
//     return 2* pi * r * h + 2 * pi * r * r;

// }

// float cubearea(float a){
//     return 6 * a * a;
// }

// =============================================================================================================

// #include<stdio.h>
// int printstar(int n); // declaration

// int main(){
//     int n;
//     printf("enter number");
//     scanf("%d",&n);
//     printstar(n); // call
//     return 0;
// }

// int printstar(int n) // defination
// {
//    for (int i = 0; i < n; i++)
//    {
//     printf("%c",'*');
//    }

// }

// =============================================================================================================

// #include<stdio.h>

// int sum(int x,int y); // declaration

// int main(){

// int add;
// add = sum(5,5); // call
// printf("%d",add);
//     return 0;

// }

// int sum(int x,int y){  // defination

//     return x+y;
// }

// =============================================================================================================

// #include <stdio.h>
// int main()
// {
//     int number;
//     printf("enter your month in numbers :  ");
//     scanf("%d", &number);

//     switch (number)
//     {
//     case 1:
//         printf("31 days");
//         break;
//     case 2:
//         printf("38 days");
//         break;
//     case 3:
//         printf("31 days");
//         break;
//     case 4:
//         printf("30 days");
//         break;
//     case 5:
//         printf("31 days");
//         break;
//     case 6:
//         printf("30 days");
//         break;
//     case 7:
//         printf("31 days");
//         break;
//     case 8:
//         printf("31 days");
//         break;
//     case 9:
//         printf("30 days");
//         break;
//     case 10:
//         printf("31 days");
//         break;
//     case 11:
//         printf("30 days");
//         break;
//     case 13:
//         printf("31 days");
//         break;

//     default:
//         break;
//     }
// }

// =============================================================================================================

// #include <stdio.h>

// void namaste()
// {
//     printf("namaste");
// }
// void bonjur()
// {
//     printf("bonjur");
// }

// int main()
// {

//     printf("for hindi press i for french press f = ");
//     char ch;
//     scanf("%c", &ch);

//     if (ch=='i')
//     {
//         namaste();
//     }
//     else
//     {
//         bonjur();
//     }

//     return 0;
// }


// =============================================================================================================

// #include <stdio.h>

// void calculateprice(float value);

// int main(){
//     float value = 1000;
//     calculateprice(value);
//     return 0;
// }

// void calculateprice(float value){
//     value = value + (0.18 * value);
//     printf("final price is : %f",value);
// }

// =============================================================================================================

// #include <stdio.h>

// int main()
//                                                             // vowels AND consonants
// {
//     char str[100];
//     int a, e, i, o, u;
//     int vowels = 0, consonants = 0;

//     printf("Enter a string: ");
//     gets(str);

//     for (int z = 0; str[z]!= '\0'; z++)
//     {
//         if (str[z] == 'a' || str[z] == 'e' || str[z] == 'i' || str[z] == 'o' || str[z] == 'u')
//         {
//             vowels++;
//         }
//         else
//         {
//             consonants++;
//         }
//     }
//     printf("Vowels: %d\n", vowels);
//     printf("Consonants: %d\n", consonants);

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>
// int main()
//                                                        // largest and smallest
// {
//     int arr[8] = {3, 654, 87, 223, 7578, 324, 787, 5};
//     int large = arr[0], small = arr[0];

//     for (int i = 0; i < 8; i++)
//     {
//         if (arr[i] > large)
//         {
//             large = arr[i];
//         }

//         if (arr[i] < small)
//         {
//             small = arr[i];
//         }
//     }

//     printf("Largest element: %d\n", large);
//     printf("Smallest element: %d\n", small);

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     char str[] = "hello";
//     printf("ele = %s",strrev(str));
//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//                                                       //LENGTH OF STRING
//     char str[100];

//     printf("enter string : ");
//     scanf("%s",&str);
//     int length = strlen(str);

//     printf("Length of the string: %d\n", length);

//     return 0;
// }

// =============================================================================================================

// #include<stdio.h>

// int main(){
//                                                         //LENGTH OF ARRAY
// int lenght;

// int arr[] = {1,3,3,4,5,6,3,44,55,66,4635,67467,5343,435,37647};
// lenght = sizeof(arr) / sizeof(arr[0]);
// printf("size of array = %d",lenght);

// return 0;
// }

// =============================================================================================================

// #include <stdio.h>

// int main()
// {
//                                                            //MATRIX 3X3
//     int X[3][3], Y[3][3], Z[3][3];

//     // Input elements into the X
//     printf("Enter the elements of the 3x3 X:\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("Element [%d][%d]: ", i + 1, j + 1);
//             scanf("%d", &X[i][j]);
//         }
//     }

//     // Input elements into the Y
//     printf("Enter the elements of the 3x3 Y:\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("Element [%d][%d]: ", i + 1, j + 1);
//             scanf("%d", &Y[i][j]);
//         }
//     }

//     // Add both X and Y matrux in Z
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             Z[i][j] = X[i][j] + Y[i][j];
//         }
//     }

//     // Display the Z matrix
//     printf("\nThe ADDITION of Matrix X and Y is:\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", Z[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>
//                                                // STUDENT DETAILS USING STRUCTURE
// struct student
// {
//     char name[50];
//     int rollnum;
//     float marks;
// };

// int main()
// {

//     struct student s[4];
//     int i;

//     for (i = 0; i < 4; i++)
//     {
//         printf("enter detail of student %d : \n", i + 1);
//         printf("name :");
//         scanf("%s", s[i].name);
//         printf("rollnumber :");
//         scanf("%d", &s[i].rollnum);
//         printf("marks :");
//         scanf("%f", &s[i].marks);
//     }

//     printf("\nstudent details\n");
//     for (i = 0; i < 4; i++)
//     {
//         printf("student %d \n name : %s,\nrollnum : %d,\nmarks : %f\n\n", i + 1, s[i].name, s[i].rollnum, s[i].marks);
//     }
//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>

// int main() {
// //                                                      //  SUM OF ARRAY
//     int arr[100], size, sum = 0;
//     int *ptr;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     printf("Enter the elements of the array: ");
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     ptr = arr;

//     for (int i = 0; i < size; i++)
//     {
//         sum += *ptr;
//         ptr++;
//     }

//     printf("The sum of the array elements is: %d\n", sum);

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>
//                                                          // LARGEST NUMBER IN ARRAY
// int main()
// {
//     int n;
//     printf("enter the number of elemant in array = ");
//     scanf("%d",&n);

//     int arr[100];

//     printf("Enter the elements of the array :-\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     int max = arr[0];

//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>max)
//         {
//             max = arr[i];
//         }
//     }

//     printf("largest number in array is %d",max);

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>
//                                                // FACTORIAL USING RECURSION
// int factorial(int n) {
//     if (n == 0)
//     return 1;
//     else
//     return n * factorial(n - 1);
// }

// int main() {
//     int n = 6;
//     printf("Factorial of %d is %d\n", n, factorial(n));
//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>
// //                                                // SWAPPING TWO NUMBERS
// int swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("helllo\n");
// }

// int main()
// {

// int x = 5,y = 10;
// printf("before swapping x = %d,y = %d\n",x,y);
// swap(&x,&y);
// printf("after swapping x = %d,y = %d\n",x,y);

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>
// int main()
// {
//   int c=0;
//   int l=0;
//   char str[100];

//   printf("enter any string = ");
//   gets(str);

//   for (int i = 0; str[i]!='\0'; i++)
//   {
//     if (str[i]>=65 && str[i]<=90)
//     {
//       c++;                                        //UPPERCASE
//     }
//     else
//     {
//       l++;                                        //LOWERCASE
//     }

//   }

//   printf("%d\n",c);
//   printf("%d\n",l);

//   return 0;
// }

// =============================================================================================================

// #include <stdio.h>
//                                              // sum of digits of number
// int sum_of_digits(int number) {

//     return (number % 10) + sum_of_digits(number / 10);
// }

// int main() {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     printf("Sum of digits: %d\n", sum_of_digits(number));

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>

// int main() {
//     int n, r = 0, s, on;
//                                            //PALINDROM OF NUMBER
//     printf("Enter an integer: ");
//     scanf("%d", &n);

//     on = n;

//     while (n != 0) {
//         s = n % 10;
//         r = r * 10 + s;
//         n /= 10;
//     }

//     if (on == r) {
//         printf("%d is a palindrome number.\n", on);
//     } else {
//         printf("%d is not a palindrome number.\n", on);
//     }

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>

// int main() {
//     int n;

//                                           // INVERTED HALF
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (int i = n; i >= 1; i--) {

//         for (int j = 1; j <= i; j++) {
//             printf("* ");
//         }

//         printf("\n");
//     }

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>

// int main() {
//     int n;

//                                             // NOT INVERTED HALF
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>

// int main() {
//     int n = 5;
//                                         // INVERTED ABCDE PATTERN
//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             printf("%c", 'A' + j - 1);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>
// int main(){

// int n = 5;
//                                        // ABCDE PATTERN STARTS FROM A,AB
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%c",'A' + j - 1);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//                                                       // LARGEST OF 3
//     printf("enter a,b,c =");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a >= b && a >= c)
//     {
//         printf("largest number is %d\n", a);
//     }
//     else if (b >= a && b >= c)
//         printf("The largest number is %d\n", b);
//     else
//         printf("The largest number is %d\n", c);

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>

// int main() {
//                                                       //even numbers
//     int arr[5] = {1,2,3,4,6};

//     int count = 0;

//     for (int i = 0; i < 5; i++) {
//         if (arr[i] % 2 == 0) {
//         count++;
//         }
//     }

//     printf("Total even numbers: %d\n", count);

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>
// int main()
// {
//                                                             //CALCULATOR
//     char operator;
//     float num1, num2;

//     printf("choose operator (+,-,*,/) : ");
//     scanf(" %c", &operator);

//     printf("enter 2 numbers = ");
//     scanf("%f %f",&num1,&num2);

//     switch (operator)
//     {
//     case '+':
//         printf("result = %f", num1 + num2);
//         break;
//     case '-':
//         printf("result = %f", num1 - num2);
//         break;
//     case '*':
//         printf("result = %f", num1 * num2);
//         break;
//     case '/':
//         if (num2 != 0)
//         {
//             printf("result = %f", num1 / num2);
//         }
//         else
//         {
//             printf("invalid input");
//         }

//     default:
//         break;
//     }

//     return 0;
// }

// =============================================================================================================

#include <stdio.h>

int prime(long num)
{
    //                                                        //PRIME NUMBER
    if (num <= 1)
    return 1;

    for (long i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        return 1;
    }
    return 0;
}

int main()
{
    long num;

    printf("Enter a number: ");
    scanf("%ld", &num);

    if (prime(num) == 0)
    printf("%ld is a prime number.\n", num);

    else
    printf("%ld is not a prime number.\n", num);

    return 0;
}

// =============================================================================================================

// #include <stdio.h>

// int main() {
//     int n;
//     double sum = 0.0;
//                                                         //HARMONIC SERIES & SUM
//     printf("Enter number of terms: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         printf("1/%d ",i);
//         if (i<n)
//         {
//             printf("+ ");
//             sum += 1.0/i;
//         }

//     }

//     printf("\nSum of harmonic series: %.2f\n", sum);

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>

// int compareStrings(char *str1, char *str2) {
//     while (*str1 && *str2) {
//         if (*str1 != *str2) return 0;
//         str1++;
//         str2++;
//     }
//     return (*str1 == '\0' && *str2 == '\0');
// }

// int main() {
//     char str1[100], str2[100];

//     printf("Enter first string: ");
//     scanf("%s", str1);
//     printf("Enter second string: ");
//     scanf("%s", str2);

//     if (compareStrings(str1, str2))
//         printf("Strings are equal.\n");
//     else
//         printf("Strings are not equal.\n");

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>
//                                                     //ELEMENT SEARCH KD
// int main()
// {
//     int n,m,found = 0,target;
//     int arr[100];

//     printf("enter number of elements in array = ");
//     scanf("%d",&m);

//     printf("enter %d elements in array = ",m);
//     for (int j = 0; j < m; j++)
//     {
//     scanf("%d",&arr[j]);
//     }

//     printf("enter the element u want to search = ");
//     scanf("%d", &target);

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == target)
//         {
//             printf("Element %d found at position %d\n", target, i + 1);
//             found = 1;
//             break;
//         }
//     }

//     if (!found)
//         printf("Element not found.\n");
//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>
//                                                  // ELEMENT SEARCH BY GPT
// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = 5, target = 30, found = 0;

//     for (int i = 0; i < size; i++) {
//         if (arr[i] == target) {
//             printf("Element %d found at index %d\n", target, i);
//             found = 1;
//             break;
//         }
//     }

//     if (!found) printf("Element not found.\n");
//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>
//                                                            //EMPLOYEE DETAILS
// struct employee
// {
//     int id;
//     char name[50];
//     float salary;
// };

// int main()
// {

//     struct employee emp;

//     printf("enter your id = ");
//     scanf("%d", &emp.id);
//     printf("enter your name = ");
//     scanf("%s", &emp.name);
//     printf("enter your salary = ");
//     scanf("%f", &emp.salary);

//     printf("employee details\n");
//     printf("ID: %d\nNAME: %s\nSALARY: %f\n", emp.id, emp.name, emp.salary);

//     return 0;
// }

// =============================================================================================================

// #include <stdio.h>
// int main() //                                                 FILE OPERATION
// {
//     FILE *f;
//     char n;
//     f = fopen("file.txt", "w");
//     printf("enter data - ");
//     while((n = getchar()) != EOF)
//     {
//         putc(n,f);
//     }
//     fclose(f);
//     printf("data entered succesfully\n");
//     printf("your data - ");
//     f = fopen("file.txt","r");
//     while((n = getc(f)) != EOF)
//     {
//         printf("%c",n);
//     }
//     fclose(f);

//     return 0;
// }

// =============================================================================================================

