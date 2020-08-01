#include <iostream>

using namespace std;

// a[], *a, a[5] is the same declaration in C
//void fun(int a[], int n){
//    int i;
//    for(i = 0; i < n; i++){
//        cout << a[i] << ' ';
//    }
//    cout << "\n";
//}

//Returns array in memory heap
int* fun(int n){
    int *p;
    p = new int[n];
    p[3] = 10;
    return p;
}

int main(){
    //Arrays always be passed by address (*)
//    int a[5] = { 2, 4, 6, 8, 10 };
//    fun(a, 5);
    int *a;
    a = fun(10);
    cout << a[3] << endl;

}
