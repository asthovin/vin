// // *** prob no 1 ***

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf(" Enter a no. :- ");
//     scanf(" %d ", &a);
//     b = a / 10;
//     printf(" %d", b);
//     return 0;
// }

// // **** prob no. 2 ****
// #include <stdio.h>

// int main()
// {
//     int a, b;

//     printf("Enter a no. :- ");
//     scanf("%d", &a);
//     b = a % 10;
//     printf("The last digit of the given no. is :- %d", b);

//     return 0;
// }

// // **** prob no. 3 ****
// #include <stdio.h>
// int main()
// {
//     int a, b, c;

//     printf("Enter the first no.. :- ");
//     scanf("%d", &a);

//     printf("Enter the secont no. :- ");
//     scanf("%d", &b);

//     c = a;
//     a = b;
//     b = c;
//     printf(" THe swaped no. are %d %d ", a, b);

//     return 0;
// }

// // **** prob no. 4 ****

// #include <stdio.h>
// int main()
// {

//     int a, b;

//     printf("Enter the first no.. :- ");
//     scanf("%d", &a);

//     printf("Enter the second no. :- ");
//     scanf("%d", &b);
//     a = a + b;
//     b = a - b;
//     a = a - b;

//     printf(" THe swaped no. are %d %d ", a, b);

//     return 0;
// }

// // **** prob no. 5 ****

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf(" Enter a three digit no. :- ");
//     scanf(" %d", &a);
//     b = a / 100 + a / 10 % 10 + a % 10;
//     printf("%d", b);
//     return 0;
// }

// // **** prob no. 6 ****

// #include <stdio.h>
// int main()
// {
//     char a;
//     printf("Enter the no. :- ");
//     scanf("%c", &a);
//     printf(" The ASCII code of the no. is %c = %d", a, a);
//     return 0;
// }

// // **** prob no. 8 ****

// #include <stdio.h>
// int main()
// {
//     int a, b;

//     printf(" Enter a no.  ");
//     scanf("%d", &a);
//     if (a % 2 == 0)
//     {
//         printf("THe no is even");
//     }
//     else
//     {
//         printf("THe no is odd");
//     }

//     return 0;
// }

// // **** prob no. 9 ****

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     b = sizeof(a);
//     printf("%d", b);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float a, b;
//     b = sizeof(a);
//     printf("%f", b);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char a;
//     int b;
//     b = sizeof(a);
//     printf("%d", b);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     double a, b;
//     b = sizeof(a);
//     printf("%lf", b);

//     return 0;
// }

// // **** prob no. 10 ****
// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf(" Enter the no. :- ");
//     scanf(" %d", &a);
//     b = a / 10;
//     b = b * 10;
//     printf(" %d", b);
//     return 0;
// }

// // *** prob no. 11 ****

// #include <stdio.h>
// int main()
// {
//     float a, b, d;
//     float c;
//     int e;
//     printf("Enter a THe no. :- ");
//     scanf("%f", &a);

//     printf("Enter a THe Digit :- ");
//     scanf("%f", &b);

//     c = b / 10;
//     d = a + c;
//     e = d * 10;
//     printf("The combined no. is %d", e);
//     return 0;
// }

// // *** prob no. 12 ***

#include <stdio.h>
int main()
{

    float a, b;
    printf(" Enter the the value of INR :- ");
    scanf("%f", &a);
    b = a / 76.23;
    printf(" the USD of %d is %f", a, b);
    return 0;
}

// // *** prob no. 13 ****
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int a, b, c, d;
//     printf("Enter any number :- ");
//     scanf("%d", &a);
//     printf("Enter number of rotations:\n");
//     scanf("%d", &b);
//     d = sizeof(int) * 8;
//     b %= d;
//     while (b--)
//     {
//         c = a & 1;
//         a = (a >> 1) & (~(1 << d));
//         a = a | (c << d);
//     }
//     printf("After right rotation the value is = %d\n", a);
//     return 0;
// }