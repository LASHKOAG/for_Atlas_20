#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Rectangle* x = new Rectangle (2.0, 3.0);
    x->print();

    Rectangle* y = new Rectangle (4.0);
    y->print();

    //Эта программа печатает:
    //length: 2.0, width: 3.0
    //length: 4.0, width: 1.0

    if (x != NULL){
        delete x;
    }

    if (y != NULL){
        delete y;
    }

    return 0;
}
