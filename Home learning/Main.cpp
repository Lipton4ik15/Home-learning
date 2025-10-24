/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int* ptr = new int;  // Создание динамической переменной
*ptr = 10;           // Использование
        // Уничтожение

int* arr = new int[size];


delete ptr;  


void arrPlus(int arr[], int size, int num) {

	for (int i = 0; i < 3; i++)
	{
		i = arr[];
		&arr[i] = arr[i] = i++;

	}
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*
	 short* asd = new short;

	 *asd = 100;

	 delete asd;




	 int size;
	 cin >> size;
	 asd = new short[size];

	 asd[0] = 13;
	 delete[]asd; //??????? ??????? ???????

	int size = 2;
	arr = new int[size];

	arrPlus();
	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << endl;
	}






	return 0;






}




int *numbers1 {new int[4]{}};               // массив состоит из чисел 0, 0, 0, 0
int *numbers2 {new int[4]{ 1, 2, 3, 4 }}; // массив состоит из чисел 1, 2, 3, 4
int *numbers3 {new int[4]{ 1, 2 }};       // массив состоит из чисел 1, 2, 0, 0
// аналогичные определения массивов
// int *numbers1 = new int[4]{};             // массив состоит из чисел 0, 0, 0, 0
// int *numbers1 = new int[4]();             // массив состоит из чисел 0, 0, 0, 0
// int *numbers2 = new int[4]{ 1, 2, 3, 4 }; // массив состоит из чисел 1, 2, 3, 4
// int *numbers3 = new int[4]{ 1, 2 };       // массив состоит из чисел 1, 2, 0, 0
*/
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;



void expanenda_arr(int*& arr, int& size, int new_element,int index) {

    int* new_arr = new int[size + 1];


    for (int i = 0; i < index - 1; i++) {
        new_arr[i] = arr[i];
    }
    index += index ;
    for (int i = index ; i < size; i++) {
        new_arr[i] = arr[i];
    }
    
    int i = index;
    new_arr[i] = new_element;
   





    new_arr[index] = new_element;


    size++;


   
 delete[] arr;

    arr = new_arr;
   
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
int size, element, index, new_element;
int* arr = new int[size];
    
    cout << "Enter size of array: " << endl;
    cin >> size;
    int* arr = new int[size];


    for (int i = 0; i < size; i++)
    {
        cout << "Enter elements: " << endl;
        cin >> element;
        element = arr[i];
    }
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter index: " << endl;
    cin >> index;
    cout << "Enter new element: " << endl;
    cin >> new_element;


    




    cout << " Changed massive: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;


void expanenda_arr(int*& arr, int& size, int newElement, int index) {
    if (index < 0 || index > size) {
        cout << "Error!(index entering) " << endl;
        return;
    }

    int* new_arr = new int[size + 1];

    for (int i = 0; i < index; i++) {
        new_arr[i] = arr[i];
    }

    new_arr[index] = newElement;

    for (int i = index + 1; i <= size; i++) {
        new_arr[i] = arr[i - 1];
    }

    size++;

    delete[] arr;
    arr = new_arr;
}


int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int size, element, index, newElement;
    cout << "Enter size: " << endl;
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
    cout << "Enter " << i + 1 << " element: " << endl;
    cin >> element;
    arr[i] = element;
    }
    

    cout << "First massive : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter index (from " << 0 << " to " << size << "): " << endl;
    cin >> index;


    if (index < 0 || index > size) {
        cout << "Ошибка: неверный индекс!" << endl;
        return 1;
    }
    

    cout << "Enter new element: " << endl;
    cin >> newElement;
    expanenda_arr(arr, size, newElement, index);

  
    cout << "Changed massive: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

 
    delete[] arr;

    return 0;
}