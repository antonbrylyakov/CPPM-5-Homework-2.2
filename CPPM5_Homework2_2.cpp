#include <iostream>
#include <windows.h>

struct Account
{
    unsigned long long number;
    std::string clientName;
    double balance;
};

void printAccountSummary(Account account)
{
    std::cout << "Ваш счёт: " << account.clientName << ", " << account.number << ", " << account.balance;
}

void setBalance(Account& account, double newBalance)
{
    account.balance = newBalance;
}

int main()
{
    Account account;
    setlocale(LC_ALL, "Russian");
    // Задаем кодировку для ввода текста с консоли только для Windows!
    SetConsoleCP(1251);
    std::cout << "Введите номер счёта: ";
    std::cin >> account.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> account.clientName;
    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;
    setBalance(account, newBalance);
    printAccountSummary(account);
}

