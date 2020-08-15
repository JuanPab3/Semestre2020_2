/*

====| I N S T R U C C I O N E S |====

Escriba un programa que lea una secuencia de caracteres y los imprima en orden
inverso. Para esto use un stack de caracteres.

====| T O D O |====

 - Escribir un programa que lea una secuencia de caracteres, y que los imprima
   invertidos.

 - Teniendo un STRING crear un stack de caracteres.

 - Imprimir los elementos del stack.

*/

#include<iostream>
#include<string>
#include<stack>

using namespace std;

void print_inv_stack(stack<char> schar);
void pritSint(stack<char> sc);

int main () {

    //llenar el stack
    string w = "stack";
    stack<char> sc;

    for (char elem : w) {
        sc.push(elem);
    }
    pritSint(sc);
    print_inv_stack(sc);
    // kcats -> stack


    return 0;
}

void pritSint(stack<char> sc) {
    cout << "[ ";
    while (!sc.empty()) {
        cout << sc.top() << " ";
        sc.pop();
    }
    cout << "]" << endl;
}

void print_inv_stack(stack<char> schar) {
    stack<char> temp;
    while (!schar.empty()) {
        temp.push(schar.top());
        schar.pop();
    }
    pritSint(temp);
}
