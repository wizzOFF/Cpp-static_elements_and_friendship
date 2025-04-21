
#include <iostream>
#include <vector>
#include "Calculatrice.hpp"

using namespace std;

int main(int argc, const char* argv[])
{
    vector <int> vector {1, 2, 3, 4, 5};
    int somme = Calculatrice::somme(vector);

    cout << "La somme est: " << somme << endl;
    return 0;
}