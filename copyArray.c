#include <stdio.h>
#include <stdlib.h>

int *array_copy(int *array, int length);

int main(void)
{
    int a1[] = {1,2,3,4,5};
    int a2[] = {99,50,30,70,80,90,100,50};
    
//    a1[0] = 50; Test for change.

    int *a1_copy = array_copy(a1, 5);
    int *a2_copy = array_copy(a2, 8);

//    a1[0] = 20; Test for change.

    for ( int i = 0; i < 5; i++)
        printf("a1_copy[%d]=%d\n", i, a1_copy[i]);
    
    for ( int i = 0; i < 8; i++)
        printf("a2_copy[%d]=%d\n", i, a2_copy[i]);


    return 0;
}

int *array_copy(int *array, int length)
{
    int *c = malloc(length * sizeof(int));
    for (int i = 0; i < length; i++)
        c[i] = array[i];

    return c;
}