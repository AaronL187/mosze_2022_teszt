#include <iostream>
using namespace std;

constexpr int N_ELEMENTS = 100;
constexpr int C_ELEMENTS = 100;

int main()
{

    int* b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa";
    double atlag = 0;
    for (int i = 0; i < 100; i++)
    {
        b[i] = i * 2;
        atlag += b[i];
        std::cout << i + 1 << ". darab: " << "Ertek: " << atlag << endl;
    }

    std::cout << "Atlag szamitasa: " << endl;
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << endl;

    std::cout << "Kristof modositasa." << endl;
    return 0;
}
