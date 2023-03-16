#include <stdio.h>

int main(){
    printf("[----- [김상수] [2018038078] -----]");
    // 정수형 변수 i, 정수형의 포인터 변수 ptr, 정수형의 포인터 변수의 포인터 변수인 이중 포인터인 dptr 선언
    int i;
    int *ptr;
    int **dptr;

    // i의 값을 1234로 초기화.
    i = 1234;
    // i의 값, 주소, ptr의 값, 주소 출력
    // ptr의 경우 아직 초기화가 안되있기 때문에 쓰레기값을 출력. 
    // 위치가 어디인지 추론 하기 위해 main의 위치를 출력해봄.
    // address of i == 0x16ee4ea68
    // value of ptr == 0x100fc4000
    // address of main == 0x100fb3ac0
    // 라고 나오는 것을 보면 ptr에 들어간 값(주소)는 텍스트(코드) 영역보단 위고 스택보단 아래이다.
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("address of main == %p\n", main);

    ptr = &i; /* ptr is now holding the address of i */
    // i의 값, 주소, ptr의 값, 주소 출력
    // 위와는 달리 ptr의 값을 i의 주소로 초기화를 해주었다.
    // i의 값은 1234가 나오고 i의 주소와 ptr의 값은 동일하다.
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);

    dptr = &ptr; /* dptr is now holding the address of ptr */
    // i, ptr, dptr의 값, 주소 출력
    // dptr은 ptr의 주소를 값으로 가진다. 
    // i의 값을 참조 하기 위해 *를 두개를 쓰는 것을 볼 수 있다.
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);
    printf("address of i == %p\n", &i);
    printf("value of ptr == %p\n", ptr);
    printf("address of ptr == %p\n", &ptr);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of dptr == %p\n", dptr);
    printf("address of dptr == %p\n", &dptr);
    printf("value of *dptr == %p\n", *dptr);
    printf("value of **dptr == %d\n", **dptr);

    *ptr = 7777; /* changing the value of *ptr */
    // ptr을 통해서 i의 값을 바꿀 수 있다.
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);

    **dptr = 8888; /* changing the value of **dptr */
    // 마찬가지로 dptr을 통해서 i의 값을 바꿀 수 있다.
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);
    printf("value of *ptr == %d\n", *ptr);
    printf("value of **dptr == %d\n", **dptr);

    return 0;
}