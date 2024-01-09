#include <QtTest>
#include "calculator.h"

// add necessary includes here

class calctest : public QObject
{
    Q_OBJECT

public:
    calctest();
    ~calctest();

private slots:
    void test_add();
    void test_subtract();
};

calctest::calctest()
{

}

calctest::~calctest()
{

}

void calctest::test_add() {
    Calculator calc;
    calc.add(10);
    calc.add(5);
    QCOMPARE(calc.getTotal(), 15);
}

void calctest::test_subtract() {
    Calculator calc;
    calc.add(10);
    calc.subtract(5);
    QCOMPARE(calc.getTotal(), 5);
}

QTEST_APPLESS_MAIN(calctest)

#include "tst_calctest.moc"
