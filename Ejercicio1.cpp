//1) Dados dos números enteros llamados mayor y menor, obtener el máximo común divisor (mcd) de ambos por el método de Euclides. 
//Para resolver este problema se procede así: a) se realiza la división entera del mayor entre el menor, b) si el residuo es cero, 
//el mcd está en la variable llamada menor, despliega el resultado y termina el programa, c) pero si el residuo no es cero, el valor de 
//menor pasa a mayor y el valor de residuo pasa a menor, d) repetir el paso a.

#include <iostream>

using namespace std;

int MCD(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else MCD(b, a % b);
}

int main(void)
{
    int a, b;

    cout << endl;
    cout << "\tENCONTRAR EL MCD DE DOS NUMEROS ENTEROS" << endl << endl;

    cout << "OJO: No ingrese un numero menor o igual a 0." << endl << endl;
    cout << "Ingrese un numero: ";
    cin >> a;

    if(a <= 0)
    {
        cout << "ERROR. ingrese otro numero: ";
        cin >> a;
    }
    while(a < 0);

    cout << "Ingrese otro numero: ";
    cin >> b;

    if(b <= 0)
    {
        cout << "ERROR. ingrese otro numero: ";
        cin >> b;
    }
    while(b < 0);
    cout << endl;

    if(a > b)
    {
        cout << "El MCD es: " << MCD(a,b); 
        cout << endl << endl;
    }
    else if(a < b)
    {
        cout << "El MCD es: " << MCD(b,a);
        cout << endl << endl;
    }

    return 0;
}