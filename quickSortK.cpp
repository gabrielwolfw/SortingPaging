#include <iostream>
using namespace std; 

//Clase para manejar el arreglo
class PagedArray{
    public:
    void RemplazoPagina();
};

void PagedArray::RemplazoPagina(){
    cout << "Esto es un arreglo, otro cambio más \n";
}


void swap(int* a, int* b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];  
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++; 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        
        int pi = partition(arr, low, high); 
  

        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
  
//Function to print the array
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  
// Driver Code
int main() 
{ 
    int arr[] = {10, 20 ,7, 8, 9, 1, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    quickSort(arr, 0, n - 1); 
    cout << "Sorted array: \n"; 
    printArray(arr, n); 
    
    PagedArray miObjeto;
    miObjeto.RemplazoPagina();


    return 0; 
} 


