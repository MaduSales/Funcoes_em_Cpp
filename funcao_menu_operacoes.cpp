#include <iostream>
using namespace std;

float adicao(float num1, float num2)
{
	return num1 + num2;
}

float subtracao(float num1, float num2)
{
	return num1 - num2;
}

float multiplicacao(float num1, float num2)
{
	return num1 * num2;
}


float divisao(float num1, float num2)
{
	float resultado;


	if (num1 == 0 || num2 == 0) {
		cout << "Nao e possivel dividir por 0";
	} else {
		resultado = num1 / num2;
	}

	return resultado;
}
    
void menu(){
    int opcao;
    float valor1, valor2;
    
do{
   
    cout << "Escolha um numero: \n";
    cout << "0. Saindo\n";
    cout << "1. Soma\n";
    cout << "2. Subtração \n";
    cout << "3. Multiplicacao \n";
    cout << "4. Divisão \n";
    cin >> opcao;
    
    if (opcao == 0){
        break;
        cout << "Encerrando..";
    } 
    
    cout << "Insira o primeiro número da operacao: ";
    cin >> valor1;
        
    cout << "Insira o número da operacao: ";
    cin >> valor2;
    
    switch(opcao){
        case 1:
        cout << "O resultado é: " << adicao(valor1, valor2) << endl << endl;
        break;
        
        case 2:
        cout << "O resultado é: " << subtracao(valor1, valor2) << endl << endl;
        break;
        
        case 3:
        cout << "O resultado é: " << multiplicacao(valor1, valor2) << endl << endl;
        break;
        
        case 4:
        cout << "O resultado é: " << divisao(valor1, valor2) << endl << endl;
        break;
        
        default:
        cout << " Erro! \n";
    }
} while (opcao > 0 && opcao < 4);
    
}


int main()
{
	menu();
	return 0;
}
