#include <iostream>

using namespace std;

//    Pass by Value // Call by Value
//void swap(int x, int y ){
//    int temp;
//    temp = x;
//    x = y;
//    y = temp;
//}

// call by Address
void swap(int *x, int *y ){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// call by reference
void swap(int &x, int &y ){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int a, b;
    a = 10;
    b = 20;

//    call by value
//    swap(a, b);
//    printf("Swap? %d - %d\n", a, b);

//    call by Address
    swap(&a, &b);
    printf("Swap? %d - %d\n", a, b);

//    call by reference
    swap(&a, &b);
    printf("Swap? %d - %d\n", a, b);
}
