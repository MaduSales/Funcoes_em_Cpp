#include <iostream>
#include <cmath>

using namespace std;

int hipotenusa(int a, int b){
   int c;
   
   return sqrt(c = (a * a) + (b * b));
   
}

int main()
{
    int a, b;
    cout<<"Informe o primeiro valor do cateto do triângulo\n";
    cin >> a;
    
    cout<<"Informe o segundo valor do cateto do triângulo\n";
    cin >> b;
    
    cout << "O valor da hipotenusa é: " << hipotenusa(a, b);

    return 0;
}
