#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];
    std::cout << '1-100 ertekek duplazasa' //Hiányzik pontos vesszõ
    for (int i = 0;) //nincs befejezve a for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //nincs definiálva meddig fut a ciklus
    {
        std::cout << "Ertek:" //nincs megadva az érték váltózója
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // double legyen, értéke 0
    for (int i = 0; i < N_ELEMENTS, i++) // meglehet csinálni egy for ciklusban is
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
