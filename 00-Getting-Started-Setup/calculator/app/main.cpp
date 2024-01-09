#include <iostream>
#include "calculator.h"
using namespace std;

int main() {
    Calculator calc;
    calc.add(10);
    cout << calc.getTotal() << endl;

    return 0;
}
