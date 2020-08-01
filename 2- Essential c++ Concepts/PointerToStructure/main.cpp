#include <iostream>

using namespace std;

struct Rectangle{
    int lenght;
    int breadth;
};

int main(){
    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r;

    (*p).lenght = 20;
    cout << r.lenght << endl;

    p->lenght = 30;
    cout << r.lenght << endl;

    struct Rectangle *ph;
    ph = new Rectangle;
    ph->lenght = 10;
    ph->breadth = 20;
    cout << ph->lenght << endl;
    cout << ph->breadth << endl;

}
