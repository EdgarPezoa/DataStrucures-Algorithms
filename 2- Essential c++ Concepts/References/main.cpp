#include <iostream>

using namespace std;

// a/r have the same name to value 10;
// indeed is add another name to a variable
int main(){
    //Data Variable
    int a = 10;

    //Pointer Variable
    int *p;

    //Reference Variable
    int &r = a;

    cout << a << endl;
    r++;
    cout << a << endl;
    cout << r << endl;

}
