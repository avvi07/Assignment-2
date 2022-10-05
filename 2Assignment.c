// 1. Write a program to print unit digit of a given number

// #include<stdio.h>
// int main()
// {   
//     int a;
//     printf("Enter a numnber: ");
//     scanf("%d",&a);
//     printf("%d",a%10);

//     return 0;
// }

// 2. Write a program to print a given number without its last digit.

// #include<stdio.h>
// int main()
// {   
//     int a;
//     printf("Enter a numnber: ");
//     scanf("%d",&a);
//     printf("%d",a/10);

//     return 0;
// }

// 3. Write a program to swap values of two int variables

// #include<stdio.h>
// int main()
// {   
//     int a;
//     int b;
//     int temp;
//     printf("Enter the numbers\n");
//     scanf("%d%d",&a,&b);
    
//     printf("after swap\n");
//     temp = a;

//     a = b;

//     b = temp;
//     printf("a = %d\nb = %d",a,b);

//     return 0;
// }

// 4. Write a program to swap values of two int variables without using a third variable.

// #include<stdio.h>
// int main()
// {   
//     int a;
//     int b;
//     printf("Enter the numbers\n");
//     scanf("%d%d",&a,&b);
    
//     printf("after swap\n");
//     a = a + b;

//     b = a - b;

//     a = a - b;
//     printf("a = %d\nb = %d",a,b);

//     return 0;
// }

// 5. Write a program to input a three-digit number and display the sum of the digits.

// #include<stdio.h>
// int main()
// {
//     int a,b,c,d,e,s;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     b = a/10;
//     c = b/10;
//     d = b%10;
//     e = a%10;
//     s = c+d+e;

//     printf("Sum of the given number: %d",s);

//     return 0;
// }

// 6. Write a program which takes a character as an input and displays its ASCII code.

// #include<stdio.h>
// int main()
// {
//     char c;
//     printf("Enter an char: ");
//     scanf("%c",&c);
//     printf("The ASCII code of %C is %d",c,c);
//     return 0;
// }

// 7. Write a program to find the position of first 1 in LSB.

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     int b = log2(a & -a) + 1;
//     printf("Position of first 1: %d",b);
//     return 0;
// }

// 8. Write a program to check whether the given number is even or odd using a bitwise
// operator.

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number: ");
//     scanf("%d",&a);

//     if (a%2==0)
//     {
//         printf("Number is even\n");
//     }else
//     {
//         printf("Number is odd");
//     }
    
       
//     return 0;
// }

// 9. Write a program to print size of an int, a float, a char and a double type variable

// #include<stdio.h>
// int main()
// {
//     int a;
//     float b;
//     char c;
//     double d;

//     printf("The size of char is: %zu bytes\n",sizeof(c));
//     printf("The size of int is: %zu bytes\n",sizeof(a));
//     printf("The size of float is: %zu bytes\n",sizeof(b));
//     printf("The size of double is: %zu bytes\n",sizeof(d));

//     return 0;
// }

// 10. Write a program to make the last digit of a number stored in a variable as zero. 
// (Example - if x=2345 then make it x=2340)

// #include<stdio.h>
// int main()
// {
//     int a = 0,b,c;
//     printf("Enter a number: ");
//     scanf("%d",&b);    
//     c = b/10;
//     printf("%d%d",c,a);
//     return 0;
// }

// 11. Write a program to input a number from the user and also input a digit. Append a 
// digit in the number and print the resulting number. (Example - number=234 and 
// digit=9 then the resulting number is 2349)

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter the number: ");
//     scanf("%d",&a);

//     printf("Enter ther digit: ");
//     scanf("%d",&b);

//     printf("%d%d",a,b);   
//     return 0;
// }

// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
// convert it into USD.

// #include<stdio.h>
// int main()
// {
//     float a, b = 76.23,c;
//     printf("Enter the amount in INR: ");
//     scanf("%f",&a);

//     printf("Price in USD is %.04f",c=a/b);     
//     return 0;
// }

// 13. Write a program to take a three-digit number from the user and rotate its digits by 
// one position towards the right

// #include<stdio.h>
// int main()
// {
//     int a,b,c,x;
//     printf("Enter the numbers: ");
//     scanf("%d%d%d",&a,&b,&c);
//     printf("%d%d%d\n",a,b,c);

//     x = a;
//     a = b;
//     b = c;
//     c = x;

//     printf("%d%d%d",a,b,c);
//     return 0;
// }