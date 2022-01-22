
#include <iostream>
#include <conio.h>
using namespace std;
class BankAccount
{
    char number[20];// номер счёта
    int size; // размер счета
    char currency;// валюта

public:
    void OpenAccount(); // открытие счета
    void Get();// снятие средств
    void Set();// пополнение 
    void OutPut(); // состояние счёта
};
void BankAccount::OpenAccount()
{
    cout << "Введите номер счета: ";cin >> number;
    cout << "Выберете валюту($,E,R,G): ";cin >> currency;
    cout << "Сколько внести?";cin >> size;
    cout << "Счёт открыт!" << endl << endl;
}
void BankAccount::Get()
{
    int n;
    do
    {
        cout << "Сколько снять? ";cin >> n;
        if (n > size) cout << "У вас таких средств нет! Запросите меньшую сумму." << endl;
    }     while (n > size);
    size = size - n;
}
void BankAccount::Set()
{
    int n;
    cout << "Сколько желаете внести? ";cin >> n;
    size = size + n;
}
void BankAccount::OutPut()
{
    cout << endl << "Текущее состояние счёта: " << endl;
    cout << "Номер счета: " << number << endl;
    cout << "Валюта: " << currency << endl;
    cout << "Колчество средств на счёте: " << size << endl << endl;
}
int main()
{
    setlocale(0, "Rus");
    BankAccount ac;
    ac.OpenAccount();
    ac.Get();
    ac.OutPut();
    ac.Set();
    ac.OutPut();
    _getch();
    return 0;
}


class Account
{
    private:
        std::string name;
        int number;
    
    public:
        Account() { number = 0; };
        void enter();
};

void Account::enter()
{
    std::cout << "Введите фамилию " << std::endl;
    std::cin >> name;
    std::cout << "Введите номер банковского счёта " << std::endl;
    std::cin >> number;
    
}