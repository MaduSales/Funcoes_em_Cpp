#include <iostream>

using namespace std;

const float pi = 3.14159;

float perimeter(float raio){
    2*pi*raio;
}

float area(float raio){
    return pi*raio*raio;
}

int main()
{
    float raio;
    
    cout << "Digite o raio: ";
    cin >> raio;
    
    cout << "Perímetro: " << perimeter(raio) << endl;
    cout << "Área: " << area(raio) << endl;

    return 0;
}
