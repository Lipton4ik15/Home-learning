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


// Функция для увеличения массива
void expanenda_arr(int*& arr, int& size, int newElement) {
    // Создаем новый массив на одну ячейку больше
    int* new_arr = new int[size + 1];

    // Копируем все элементы из старого массива в новый
    for (int i = 0; i < size; i++) {
        new_arr[i] = arr[i];
    }

    // Добавляем новый элемент в последнюю ячейку
    new_arr[size] = newElement;

    // Увеличиваем размер массива
    size++;

    // Освобождаем память старого массива
    delete[] arr;

    // Переназначаем указатель на новый массив
    arr = new_arr;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Создаем начальный массив из 2 элементов
    int size = 2;
    int* arr = new int[size];

    // Заполняем массив числами
    arr[0] = 1;
    arr[1] = 2;

    // Выводим исходный массив
    cout << "First massive : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Вызываем функцию расширения массива
    int newElement = 3;
    expanenda_arr(arr, size, newElement);

    // Выводим измененный массив
    cout << " Changed massive: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Освобождаем выделенную память
    delete[] arr;

    return 0;
}*/
//dinamic выше сразу