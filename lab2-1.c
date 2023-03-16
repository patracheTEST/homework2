#include <stdio.h>

int main(){
    printf("[----- [김상수] [2018038078] -----]");
    // char, int, float, double 타입에 대하여 변수를 선언한다.
    char charType;
    int integerType;
    float floatType;
    double doubleType;
    // 선언한 변수들에 대한 크기를 출력한다.
    // 타입의 크기는 출력되는 결과와 동일하다.
    printf("Size of char: %ld byte\n",sizeof(charType));
    printf("Size of int: %ld bytes\n",sizeof(integerType));
    printf("Size of float: %ld bytes\n",sizeof(floatType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    
    printf("-----------------------------------------\n");
    // 타입에 대한 크기를 출력한다. (char, int, float, double)
    // sizeof() 함수로 변수뿐만 아니라 타입 그 자체의 크기 또한 구할 수 있다.
    printf("Size of char: %ld byte\n",sizeof(char));
    printf("Size of int: %ld bytes\n",sizeof(int));
    printf("Size of float: %ld bytes\n",sizeof(float));
    printf("Size of double: %ld bytes\n",sizeof(double));

    printf("-----------------------------------------\n");
    // 각기 다른 타입의 포인터 타입에 대한 크기를 출력한다. (char*, int*, float*, double*)
    // 사용하고 있는 pc가 64비트라서 포인터 변수의 크기가 8바이트이다
    printf("Size of char*: %ld byte\n",sizeof(char*));
    printf("Size of int*: %ld bytes\n",sizeof(int*));
    printf("Size of float*: %ld bytes\n",sizeof(float*));
    printf("Size of double*: %ld bytes\n",sizeof(double*));

    return 0;
}