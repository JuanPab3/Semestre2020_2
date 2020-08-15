/*

====| I N S T R U C C I O N E S |====

Usando las operaciones estándar de un queue, escriba un programa que elimina el
elemento medio de una cola de números de doble precisión.

====| T O D O |====

 - Eliminar el elemento medio de una cola de números de doble precisión.
 - Utilizar operaciones estándar.

*/

#include<iostream>
#include<queue>

using namespace std;


void middle_double(queue<double> &dq);
void print_double(queue<double> dq);


int main () {

    queue<double> dq;

    for (double i = 0.;i < 6; i++) {
        dq.push(i+0.1);
    }
    print_double(dq);
    middle_double(dq);
    print_double(dq);


    return 0;
}




void print_double(queue<double> dq) {
    cout << "[ ";
    int sz = dq.size();
    for (int i = 0; i < sz; i++) {
        cout << dq.front() << " ";
        dq.pop();
    }
    cout << "]" << endl;

}

void middle_double(queue<double> &dq) {
    int sz = dq.size();
    int mid = sz/2;

    for (int i = 0;i < sz; i++) {
        if (i != mid) {
            dq.push(dq.front());
        }
        dq.pop();
    }
}













































/*
int main () {

    int test_num = 5;
    queue<double> dq;
    for (double i = 0.; i< test_num; i++) dq.push(i+1.1);
    print_double(dq);
    dq = middle_double(dq);
    print_double(dq);




    return 0;
}


void print_double(queue<double> dq) {
    cout << "[ ";
    int sz = dq.size();
    for (int i = 0; i < sz; i++) {
        cout << dq.front() << " ";
        dq.pop();
    }
    cout << "]" << endl;

}

queue<double> middle_double(queue<double>  dq) {
    int sz = dq.size();
    queue<double>  temp;
    for (int i = 0; i < sz; i++){
        if (i != sz/2) temp.push(dq.front());
        dq.pop();
    }
    while (!temp.empty()) {
        dq.push(temp.front());
        temp.pop();
    }

    return dq;
}
*/
