#include <iostream>
using namespace std;

int par_impar()
{
    int num;
    
    cout << "Digite um numero: ";
    cin >> num;
    
    if(num%2 == 0){
        return 0;
    }
    else {
        return 1;
    }
    
}


int main()
{
   if(par_impar() == 0){
       cout << "É par!\n";
   }
   else {
       cout << "É ímpar!\n";
   }
   return 0;
}
