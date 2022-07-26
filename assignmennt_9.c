*******problem no .1 * ******

#include <stdio.h>
                            int
                            main()
{
    int x, a;
    printf(" Enter the month no. :- ");
    scanf(" %d", &x);
    switch (x)
    {
    case 1:

        printf("Their are 31 days in this month");

        break;

    case 12:

        printf("Their are 31 days in this month");

        break;
    case 3:

        printf("Their are 31 days in this month");

        break;
    case 5:

        printf("Their are 31 days in this month");

        break;
    case 7:

        printf("Their are 31 days in this month");

        break;
    case 8:

        printf("Their are 31 days in this month");

        break;
    case 10:

        printf("Their are 31 days in this month");

        break;

    case 4:
        printf("Their are 30 days in this month");
        break;

    case 6:
        printf("Their are 30 days in this month");
        break;
    case 9:
        printf("Their are 30 days in this month");
        break;
    case 11:
        printf("Their are 30 days in this month");
        break;

    case 2:
        printf("Their are 28 days in this month");

    default:
        printf("Error");
        break;
    }
    return 0;
}
*********prob no .2 * ****
#include <stdio.h>
                         int
                         main()
{
    int x, a, b;
    printf(" Enter a no. :- ");
    scanf("%d", &x);

    printf("Enter two no. :- ");
    scanf("%d %d", &a, &b);

    switch (x)
    {

    case 1:

        printf(" The sum is %d", a + b);
        break;

    case 2:
        printf(" The difference is %d", a - b);
        break;
    case 3:
        printf(" The product is %d", a * b);
        break;
    case 4:
        printf(" The division is %d", a / b);
        break;

    default:
        printf("anonymous value");
        break;
    }

    return 0;
}

// ****** problem no. 3 *******

#include <stdio.h>
int main()
{
    int x;
    printf("Enter the no. of a day from a week :- ");
    scanf(" %d", &x);
    switch (x)
    {
    case 1:
        printf(" Hello, have a awesome monday dear");
        break;

    case 2:
        printf(" Hello, have a awesome Tuesday dear");
        break;
    case 3:

        printf(" Hello, have a awesome wednwsday dear");
        break;
    case 4:
        printf(" Hello, have a awesome thursday dear");
        break;
    case 5:
        printf(" Hello, have a awesome friday dear");
        break;
    case 6:
        printf(" Hello, have a awesome saturday dear");
        break;
    case 7:
        printf(" Hello, have a awesome sunday dear");
        break;

    default:
        printf(" Invalid day");
        break;
    }
    return 0;
}

// ****** problem no. 5*******

#include <stdio.h>
int main()
{
    int x;

    printf("Enter a no.:- ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("Good");

        break;
    case 2:
        printf("Better");

        break;
    case 3:
        printf("Best");

        break;

    default:
        printf("invalid");
        break;
    }
    return 0;
}

// ****** problem no. 6*******
#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter the year :- ");
    scanf("%d", &a);

    b = a % 4;

    switch (b)
    {
    case 1:
        printf("The entered year is not a leap year");
        break;

    case 0:
        printf("The entered year is  a leap year");
        break;

    default:
        printf("invalid");
        break;
    }

    return 0;
}
