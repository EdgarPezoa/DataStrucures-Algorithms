#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

struct Card{
    int face;
    int shape;
    int color;
};

void cardDeck(){
    struct Card deck[52] = { {1, 0, 0}, {2, 0, 0 }};
    printf("%d", deck[0].face);
}

int main(){
    //Declaration and initialization
    struct Rectangle r={10,5};
    cout << r.length << endl;
    cout << r.breadth << endl;
    printf("Area of rectangle is %d\n", r.length * r.breadth);

    struct Card c;
    c.face = 1;
    c.shape = 0;
    c.color = 0;
    cardDeck();
}
