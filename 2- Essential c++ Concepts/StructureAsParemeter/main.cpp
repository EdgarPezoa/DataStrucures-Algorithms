#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

// Call by value
//int area(struct Rectangle r){
//    return r.length * r.breadth;
//}

// Call by reference
int area(Rectangle &r){
    return r.length * r.breadth;
}

int area(Rectangle *r){
    return r->length * r->breadth;
}

void changeLength(Rectangle *rp, int l){
    rp->length = l;
}

int main(){
    Rectangle r = {10, 5};

    changeLength(&r, 20);


    //Passing by value
    printf("%d", area(r));

    //Passing by reference
    printf("%d", area(r));

    //Passing by address
    printf("%d", area(&r));
}
