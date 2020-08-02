#include <iostream>

using namespace std;

template<class T>
class Arithametic{
    private:
    T a;
    T b;

    public:
    Arithametic(T a, T b);
    T add();
    T sub();
};

template<class T>
Arithametic<T>::Arithametic(T a, T b){
    this->a = a;
    this->b = b;
}

template<class T>
T Arithametic<T>::add(){
    return a + b;
}
template<class T>
T Arithametic<T>::sub(){
    return a - b;
}

int main(){
    Arithametic<int> arInt(10, 20);
    cout << arInt.add() << endl;
    cout << arInt.sub() << endl;

    Arithametic<float> arFloat(10.5, 20.5);
    cout << arFloat.add() << endl;
    cout << arFloat.sub() << endl;
}
