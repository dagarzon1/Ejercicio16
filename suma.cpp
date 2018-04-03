#include <iostream>

using namespace std;

int suma(int n);
int main()
{
int n=100;
int s=suma(n);
cout << "La suma es: " << s << endl;
}
int suma(int n)
{
	return n*(n+1)/2;
}


