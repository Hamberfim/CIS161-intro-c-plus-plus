#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
private:
    double total;
public:
    Calculator();
    void add(double amount);
    void subtract(double amount);
    double getTotal();
};

#endif // CALCULATOR_H
