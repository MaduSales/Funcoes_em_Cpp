#include <iostream>
#include <ctime>

using namespace std;

void jogarMoeda(int n){
    int cara = 0, coroa = 0;
    
    for(int i = 1; i <= n; i++){
    bool resultado = rand()%2;
    
    if(resultado){
        cara++;
    }
    else {
        coroa++;
    }
    }
    
    cout << "O lançamento de caras ocorreu " << cara << " vezes, sendo igual a (" << (cara * 100.0 / n) << "%) das vezes\n";
    cout << "O lançamento de coroas ocorreu " << coroa << " vezes, sendo igual a (" << (coroa * 100.0 / n) << "%) das vezes";
   
}


int main()
{
    srand(time(0));
    int n;
    cout << "Digite o numero de lançamentos que deseja realizar: ";
    cin >> n;
    
    jogarMoeda(n);
    
    return 0;
}
