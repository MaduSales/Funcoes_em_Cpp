#include <iostream>

using namespace std;

void test(){
    static int myVar = 1;
    
    cout << myVar << endl;
    
    myVar++;
}

int main()
{
    test();
    test(); /*Agora, com o static, toda vez que a função é chamada, ela é mostrada de forma incrementada*/

    return 0;
}
