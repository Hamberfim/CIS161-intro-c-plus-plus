#include <iostream>
using std::cout;
using std::endl;

// declare a balance variable
double balance;

// simulate call to get current account balance
void init()
{
    // initialize the balance variable to zero
    balance = 0;
}

// deposit function
double deposit(double amount)
{
    // refactor based on tests
    if (amount <= 0) {
        return balance;
    }
    return balance += amount;
}

// withdraw function
double withdraw(double amount)
{
    // refactor based on tests
    if (amount <= 0 || amount > balance) {
        return balance;
    }
    return balance -= amount;
}

// TESTING CODE SECTION
#include <QtTest>

// add necessary includes here

class BankTest : public QObject
{
    Q_OBJECT

public:
    BankTest();
    ~BankTest();

private slots:
    void test_deposit();
    void test_deposit_negative();
    void test_withdraw();
    void test_withdraw_negative();
    void test_withdraw_overdraft();
};

BankTest::BankTest() {}

BankTest::~BankTest() {}

// TDD TEST DEFINED BY PROGRAMMER
void BankTest::test_deposit()
{
    init();
    // test the deposit
    deposit(100.00);

    // QCOMPARE(actual, Expected;)
    QCOMPARE(balance, 100.00);
}

void BankTest::test_deposit_negative()
{
    init();
    // test the deposit
    deposit(-100.00);

    // QCOMPARE(actual, Expected);
    QCOMPARE(balance, 0);
}

void BankTest::test_withdraw()
{
    init();
    deposit(100.00); // add to the balance
    // test the withdraw
    withdraw(10.00);

    // QCOMPARE(actual, Expected);
    QCOMPARE(balance, 90.00);
}

void BankTest::test_withdraw_negative()
{
    init();
    deposit(100.00); // add to the balance
    // test the withdraw
    withdraw(-50.00);

    // QCOMPARE(actual, Expected);
    QCOMPARE(balance, 100.00);
}

void BankTest::test_withdraw_overdraft()
{
    init();
    deposit(100.00); // add to the balance
    // test the withdraw
    withdraw(110.00);

    // QCOMPARE(actual, Expected);
    QCOMPARE(balance, 100.00);
}

// MAIN() FOR TESTING ENV/Framework
QTEST_APPLESS_MAIN(BankTest)

// comment out QTEST_APPLESS_MAIN(BankTest) to run application rather than tests, change notmain() to main()
int notmain()
{
    /* account balance initialized to zero via init() function above */
    // attempt deposit
    deposit(100.00);
    cout << "Current Balance: " << balance << endl;

    // attempt withdraw
    withdraw(10.00);
    cout << "Current Balance: " << balance << endl;

    return 0;
}

#include "tst_banktest.moc"
