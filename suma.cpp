#include <iostream>

using std::cout;
using std::endl;

int suma(n);
int main()
{
int n=100;
int suma=suma(n);
cout << "La suma es: " << suma << endl;
}
int suma(n)
{
	return n*(n+1)/2;
}


