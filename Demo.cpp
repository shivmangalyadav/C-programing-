#include <stdio.h>
int main()
{
    int age;
    printf("Enter the number: ");
    scanf("%d", &age);

    if (age == 0)
    {
        printf("Invalid Number");
    }
    else if (age > 0 && age < 10) // Range 1--9
    {
        printf("Child");
    }
    else if (age < 18) // Range 10--170
    {
        printf("Teenager");
    }
    else if (age < 50) // Range-->18--49
    {
        printf("Adult");
    }
    else if (age < 120) // Range-->50-119
    {
        printf("Old Citizen");
    }
    else
    {
        printf("Immortal");
    }

    return 0;
}
