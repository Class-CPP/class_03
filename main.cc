// algoritmo de burbuja ORDENAMIENTO DE NUMEROS  
#include <iostream>
#include <stdio.h>
//definicion de interfaz o abstrad 
class Sortablelist{ //padre 
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
		NumericList(int* nums,int size){
			this->setArray(nums,size);
		}
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
// Algoritmo de burbuja 
void sort(Sortablelist& list){
	// algoritmo de burbuja 
	bool serealizadosCambios;
	int listsize = list.getzise();
	do{ 
		serealizadosCambios = false;
		for (int i = 0; i < (listsize - 1); i++)
		{
			if (list.isGratherThatNext(i))
			{
				list.swapWithNext(i);
				serealizadosCambios = true;
			}
		}

	}while(serealizadosCambios);
}
void print_array(int* array, int size){

	for(int i = 0;i < (size);i++) 
		std::cout<< "imprime numeros : "<< array[i] << std::endl;
		std::cout<< std::endl;

}

int main(int argc, char* argv[]){
	//polimorfidmo refecnaia al hijo  mediaante el padre  
#define Array_sizes(var) (sizeof(var)/sizeof(int))
	
	int numeros[] ={9,6,7,5,3,21,12,2,1,112,12,2,334,0};
	NumericList list(numeros, Array_sizes(numeros));
	sort(list);
	print_array(numeros,Array_sizes(numeros));
	
	int numeros2[] ={9,6,7,5,3,21,12,2,1};
	NumericList list2(numeros2, Array_sizes(numeros2));
	print_array(numeros2,Array_sizes(numeros2));
	sort(list2);
	print_array(numeros2,Array_sizes(numeros2));
	
	return 0;
}