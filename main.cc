// algoritmo de burbuja ORDENAMIENTO DE NUMEROS  
#include <iostream>
#include <stdio.h>
//definicion de interfaz o abstrad 
class Sortablelist{
	public: 
		virtual void swapWithNext(int index) = 0;
		virtual bool isGratherThatNext(int index) = 0;
		virtual int getzise() = 0;
};
// clase hija 
class NumericList : public Sortablelist{
	private:
	 int* nums;
	 int listsize;
	public:
		void swapWithNext(int index){
			int temp = nums[index];
			nums[index] = nums[index + 1];
			nums[index + 1] = temp; 
		}
		bool isGratherThatNext(int index){
			return (nums[index] > nums [index + 1]);
		}
		int getzise(void){
			return listsize;
		}
		void setArray(int* nums, int size){
			this->nums =  nums;
			this->listsize = size;
		}
};

void sort(Sortablelist* list){
	// algoritmo de burbuja 
	bool serealizadosCambios;
	int listsize = list->getzise();
	do{ 
		serealizadosCambios = false;
		for (int i = 0; i < (listsize - 1); i++)
		{
			if (list->isGratherThatNext(i))
			{
				list->swapWithNext(i);
				serealizadosCambios = true;
			}
		}

	}while(serealizadosCambios);

}

int main(int argc, char* argv[]){
	
	NumericList list;
	int numeros[5] ={9,6,7,5,3};
	list.setArray(numeros,5);
	sort(&list);
	
	
	

	for(int i = 0;i < 5;i++) 
		std::cout<< "imprime numeros: "<< numeros[i] << std::endl;

	return 0;
}