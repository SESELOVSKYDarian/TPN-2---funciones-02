#include <bits/stdc++.h>
using namespace std;
int EsMayor(int n1, int n2, int n3);
int main ()
{
	int a, b, c;
	cout<<"Ingresar el numero a verificar: ";
	cin>>a;
	cout<<"Ingresar el numero a verificar: ";
	cin>>b;
	cout<<"Ingresar el numero a verificar: ";
	cin>>c;
	cout<<"El mayor es: "<<EsMayor(a, b, c);
	return 0;
}
int EsMayor(int n1, int n2, int n3)
{
	int mayor = n1;
	if (n1 < n2 && n2 > n3)
	{
		mayor = n2;
	}
	if (n1 < n3 && n2 < n3)
	{
		mayor = n3;
	}
	return mayor;
}