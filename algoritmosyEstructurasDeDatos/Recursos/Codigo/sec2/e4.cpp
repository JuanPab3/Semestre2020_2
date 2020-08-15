/*

====| I N S T R U C C I O N E S |====

En el banco de Chía ubicado en el centro comercial más concurrido del municipio
tienen el problema de que la gente suele colarse muy seguido, para solucionar
esté problema licitaron con varios grupos de expertos en estructuras de datos;
de todos ellos escogieron dos: el primero debe entregar un algoritmo que al
conectarse con las cámaras clasifique con un número impar a aquellos que se
hayan colado, y el segundo grupo debe encargarse de reconocer la posición de
aquellos que se colaron (para que así el guardia los detecte) y además los debe
sacar de la estructura de datos. Como estamos en pandemia y la Universidad no
nos puede prestar las camaras para probar el primer algoritmo se nos encargo
hacer el segundo.  \end{block}


====| T O D O |====

 - Detectar impares de una
 - ???
 - ???
 - ???
 - ???

*/

#include<iostream>
#include<queue>

using namespace std;


void print_int(queue<int> iq);
void colado_en_la_fila(queue<int> &iq);

int main () {

   queue<int> iq;

   for (int i = 0;i < 1000; i++) {
       iq.push(i);
   }
   colado_en_la_fila(iq);

    return 0;
}

void print_int(queue<int> iq) {
    cout << "[ ";
    int sz = iq.size();
    for (int i = 0; i < sz; i++) {
        cout << iq.front() << " ";
        iq.pop();
    }
    cout << "]" << endl;
}

void colado_en_la_fila(queue<int> &iq) {
    int sz = iq.size();

    for (int i = 0;i < sz; i++) {
        if (iq.front()%2==0) {
            iq.push(iq.front());
        } else {
            cout << "Colado en index: [" << i << "]" << endl;
        }
        iq.pop();
    }
}
