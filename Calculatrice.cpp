
#include "calculatrice.hpp"

int Calculatrice::somme(std::vector<int> vector)
{
    int somme(0);
    for (int i = 0; i < vector.size; i++)
    {
        somme += vector[i];
    }
    return somme;
}