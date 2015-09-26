// algoritmo de burbuja ORDENSAMIENTO DE NUMEROS  
#include <iostream>
#include <stdio.h>
int main(int argc, char* argv[]){
	int numeros[5] ={9,6,7,5,3};
	int cambios_realizados = 0;
	bool serealizadosCambios;
	do{ 
		serealizadosCambios = false;
		int int_temp;
		for (int i = 0; i < 4; ++i)
		{
			if (numeros[i] > numeros[i+1])
				//cambios de posicion
			{
				int_temp = numeros[i];
				numeros[i] = numeros[i+1];
				numeros[i+1] = int_temp;
				serealizadosCambios = true;
			}
		}

	}while(serealizadosCambios);

	for(int i = 0;i < 5;i++) 
		std::cout<< "imprime numeros: "<< numeros[i] << std::endl;

	
	return 0;
}