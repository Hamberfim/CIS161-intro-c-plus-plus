#include "calculator.h"

Calculator::Calculator() {
    total = 0;
}

void Calculator::add(double amount) {
    total += amount;
}

void Calculator::subtract(double amount) {
    total -= amount;
}

double Calculator::getTotal() {
    return total;
}
