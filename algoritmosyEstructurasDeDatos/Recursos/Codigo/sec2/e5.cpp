/*

====| I N S T R U C C I O N E S |====

    Escriba la función:

            int howMany(list<int> L,int k)

    que recibe una lista de enteros L y un entero k. Mediante un ciclo while,
    la función debe encontrar el número de veces que se encuentra k en L y
    retornar esta cantidad. Puede modificar la lista si lo considera necesario.

====| T O D O |====

 - ???
 - ???
 - ???
 - ???

*/

#include <list>
#include <iostream>
using namespace std;

int howMany(list<int> L, int k) {
    int val = 0;
    list<int>::iterator it = L.begin();
    while (it != L.end()) {
        if (k == *it) val++;
        it++;
    }
    return val;
}


int main() {
    int key;

    // TEST 1
    list<int> lst1;
    for (int i = 0; i < 10; i++)
        lst1.push_back(2 * i);

    key = 3;
    cout << "Number of " << key << " in list: " << howMany(lst1, key) << endl;

    key = 4;
    cout << "Number of " << key << " in list: " << howMany(lst1, key) << endl;


    // TEST 2
    list<int> lst2(4, 8);

    key = 0;
    cout << "Number of " << key << " in list: " << howMany(lst2, key) << endl;

    key = 8;
    cout << "Number of " << key << " in list: " << howMany(lst2, key) << endl;

    return 0;
}
