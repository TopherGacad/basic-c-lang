#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 20; //format specifier: %d
    int chsd_asdh = 20;
    int x = 22;
    char initial_name = 'h'; //format specifier: %c
    float ave_grade = 96.5; //format speicfier: %f
    float y = 49.54656;

    printf("Age: %d \n", age);
    printf("Initial letter of the name: %c \n", initial_name);
    printf("Average Grade: %f \n", ave_grade);
    printf("Float with Specific no. of deciman %.2f", ave_grade);
    printf("Sample changes");
    return 0;
}



