/*NICOLÁS BURZA
19042015
NUMERO PAR
*/

#include<iostream>

using namespace std;

int num;
int num2;

int main()
{
	cout << "Inserte un numero:";
	cin >> num;
	num2=num%2;
	if (num<=0)
	{
		cout << "El numero ingresado no es valido. Por favor ingrese un valor positivo";
	}
	else if(num2==0)
	{
		cout << "El numero es par";
	}
	else
	{
		cout << "El numero es impar";
	}
}
