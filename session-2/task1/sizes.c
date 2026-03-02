
/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    char testChar;
    int testInt;
    float testFloat;
    short int shortIntTest;
    long int largeIntTest;
    double testDouble;

    printf("Char size is %ld bytes\n",sizeof(testChar));
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("Float size is %ld bytes\n",sizeof(testFloat));
    printf("Short int size is %ld bytes\n",sizeof(shortIntTest));
    printf("Large int size is %ld bytes\n",sizeof(largeIntTest));
    printf("Double size is %ld bytes\n",sizeof(testDouble));

    return 0;
}
