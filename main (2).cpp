#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];
    std::cout << '1-100 ertekek duplazasa' //Hi�nyzik pontos vessz�
    for (int i = 0;) //nincs befejezve a for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //nincs defini�lva meddig fut a ciklus
    {
        std::cout << "Ertek:" //nincs megadva az �rt�k v�lt�z�ja
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // double legyen, �rt�ke 0
    for (int i = 0; i < N_ELEMENTS, i++) // meglehet csin�lni egy for ciklusban is
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
