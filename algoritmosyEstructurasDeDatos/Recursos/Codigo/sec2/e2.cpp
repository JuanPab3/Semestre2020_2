/*

====| I N S T R U C C I O N E S |====

    Escriba un programa que reciba un stack de numeros enteros arbitrarios y
    que retorne el mismo stack pero donde solo los elementos que son menores a
    los elementos anteriores permanezcan en el stack.
    [10,8,11,4,7,2,1] --> [10,8,4,2,1]


====| T O D O |====

 - Insertar los datos al stack
 - El resto...

*/

#include<iostream>
#include<stack>

using namespace std;


void print_stack(stack<int> is);
stack<int> just_lower(stack<int> is);

int main () {

    stack<int> is;
    stack<int> Is;
    is.push(1);
    is.push(9);
    is.push(2);
    is.push(7);
    is.push(4);
    is.push(11);
    is.push(8);
    is.push(10);

    print_stack(is);
    Is = just_lower(is);
    print_stack(Is);



    return 0;
}

void print_stack(stack<int> is) {
    cout << "[";
    while (!is.empty()) {
        int c = is.top();
        is.pop();
        cout << c << ",";
    }
    cout << "]" << endl;
}

stack<int> just_lower(stack<int> is) {
    stack<int>temp;
    int min_ = is.top();
    while (!is.empty()) {
        if (is.top() <= min_){
            temp.push(is.top());
            cout << is.top() << "--" << min_ << endl;
            min_=is.top();
        }
        is.pop();
    }
    while (!temp.empty()) {
        is.push(temp.top());
        temp.pop();
    }
    return is;
}
