#include <iostream>
using namespace std;

float doub(){
    
    float num, dobro;
    
    cout << "Digite um numero: ";
    cin >> num;
    
    dobro = 2 * num;
    
    return dobro
}


int main()
{
   float resultado = 0;
   resultado = doub();
   
    cout << "Dobro: " << resultado;
   return 0;
}
