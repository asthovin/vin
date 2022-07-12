

// *****problem number 1*******

#include <stdio.h>
int main()
{
    printf("Hello students");
    return 0;
}

// *****problem number 2 *******

#include <stdio.h>
int main()
{
    printf("Hello\nstudents");
    return 0;
}

// *****problem number 3 *******

#include <stdio.h>
int main()
{
    printf("\"MySirG\"");
    return 0;
}

// *****problem number 4  *******

#include <stdio.h>
int main()
{
    int r;
    float A;
    printf("Enter the value of radius (r) : - ");
    scanf("%d", &r);
    A = 3.14 * r * r;
    printf(" Area of circle is %f , having the radius %d", A, r);
    return 0;
}

// **** prob no. 5 ****

#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    int i;
    printf(" enter the string :- \n");
    gets(a);
    i = strlen(a);
    printf(" the length of string is = %d \n ", i);
    return 0;
}

// *****problem number 6 *******
#include <stdio.h>
int main()
{
    char a[90];
    printf(" Enter your name : - ");
    scanf(" %s", &a);
    printf("%s", a);
    return 0;
}

// *****problem number 7 *******
#include <stdio.h>
int main()
{

    printf("%%d");
    return 0;
}

// PROB NO. 8****

#include <stdio.h>
int main()
{

    printf("\\n");
    return 0;
}

// Prob no. 9***
#include <stdio.h>
int main()
{
    printf("\\\");
    return 0;
}

// ****prob no. 10 *****

#include <stdio.h>
int main()
{
    int a, b, c;
    printf(" Enter the date :- ");
    scanf(" %d", &a);
    printf(" Enter the month:- ");
    scanf(" %d", &b);
    printf(" Enter the year :- ");
    scanf(" %d", &c);

    printf(" Day - %d , Month - %d, Year - %d ", a, b, c);
    return 0;
}

// **** prob no. 11 ****

#include <stdio.h>
int main()
{
    int a, b;
    printf(" Enter the time (Hours) : - ");
    scanf(" %d", &a);
    printf(" Enter the time (Minutes) : - ");
    scanf(" %d", &b);
    printf(" %d Hour and %d Minute ", a, b);
    return 0;
}

// **** prob no. 12****
#include <stdio.h>
int main()
{
    int x = printf("ineuron");
    printf("%d", x);
    return 0;
}
