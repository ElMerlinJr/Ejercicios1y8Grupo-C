//8) Elabore una función que, dado un número entero que se obtiene desde teclado, realice un conteo como el siguiente: Suponiendo que el 
//valor ingresado es 3: 
    //1
    //2
    //3
    //2
    //1
          
#include <iostream>

using namespace std;

void Conteo(int);
void ConteoR(int);

int main(void)
{
    int num;

    cout << endl;
    cout << "\tCONTEO DE UN NUMERO DESDE EL TECLADO " << endl << endl;
    cout << "Ingrese un numero desde su teclado: ";
    cin >> num;
    cout << endl;

    Conteo(num);
    ConteoR(num);
    
    cout << endl;
    return 0;
}

void Conteo(int num)
{
    int x;
    x = 1;
    
    while(x < num)
    {
        cout << x << endl;
        x = x + 1;
    }
}

void ConteoR(int num)
{
    if(num >= 1)
    {
        cout << num << endl;
        num = num - 1;
        ConteoR(num);
    }
}