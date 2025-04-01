#include <iostream>

using namespace std;

void square(int &num);

int main()
{
    int number = 6;
    
    cout << "Antes da função: " << number << endl;
    square(number); 
    cout << "Depois da função: " << number << endl;
    return 0;
    /* Por conta do &, a variável com valor armazenado 
    não será uma cópia, e sim uma variável de referência, ou seja, o endereço original da variável. Quando realizarmos
    uma operação, o primeiro valor declarado na variável será usado na operção e mudará seu valor. */
}

void square(int &num){
    num = num * num;
    cout << "Durante a função: " << num << endl;
}
