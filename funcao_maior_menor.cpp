#include <iostream>
#include <cmath>

using namespace std;

int maior(int num1, int num2, int num3){
    int maior;
    
   if (num1 > num2 && num1 > num3){
       maior = num1;
   }
   else if (num2 > num3 && num2 > num3){
       maior = num2;
   }
   else {
       maior = num3;
   }
   
   return maior;
   
}



int menor(int num1, int num2, int num3){
    int menor;
    
   if (num1 < num2 && num1 < num3){
       menor = num1;
   }
   else if (num2 < num3 && num2 < num1){
       menor = num2;
   }
   else {
       menor = num3;
   }
   
   return menor;
   
}

int main()
{
    int valor1, valor2, valor3;
    cout<<"Informe o primeiro valor: ";
    cin >> valor1;
    
    cout<<"Informe o segundo valor: ";
    cin >> valor2;
    
    cout<<"Informe o segundo valor: ";
    cin >> valor3;
    
    cout << "O maior valor é é: " << maior(valor1, valor2, valor3) << "\n";
    cout << "O menor valor é: " << menor(valor1, valor2, valor3);

    return 0;
}
