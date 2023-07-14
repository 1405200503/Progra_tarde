#include <iostream>
#include <string.h>


using namespace std; 

int main()
{
	char nombre1[15];
	
	cout<<"Inserte su nombre: ";
	cin.getline(nombre1,15,'\n'); 
	
	cout<<"Su nombre es: "<<nombre1;
	
	return 0;
}
