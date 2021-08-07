
// Git Test.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int func(int a, int b)
{
    return a * b;
}
int main()
{
    int a;
    int b;
    double c;
    int res;
    std::cout << "Vedite а" << endl;
    std::cin >> a;
    std::cout << "vedite b" << endl;
    cin >> b;
    res = func(a, b);

    cout << res;
}

