/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int* ptr = new int;  // �������� ������������ ����������
*ptr = 10;           // �������������
        // �����������

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




int *numbers1 {new int[4]{}};               // ������ ������� �� ����� 0, 0, 0, 0
int *numbers2 {new int[4]{ 1, 2, 3, 4 }}; // ������ ������� �� ����� 1, 2, 3, 4
int *numbers3 {new int[4]{ 1, 2 }};       // ������ ������� �� ����� 1, 2, 0, 0
// ����������� ����������� ��������
// int *numbers1 = new int[4]{};             // ������ ������� �� ����� 0, 0, 0, 0
// int *numbers1 = new int[4]();             // ������ ������� �� ����� 0, 0, 0, 0
// int *numbers2 = new int[4]{ 1, 2, 3, 4 }; // ������ ������� �� ����� 1, 2, 3, 4
// int *numbers3 = new int[4]{ 1, 2 };       // ������ ������� �� ����� 1, 2, 0, 0
*/
/*
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;


// ������� ��� ���������� �������
void expanenda_arr(int*& arr, int& size, int newElement) {
    // ������� ����� ������ �� ���� ������ ������
    int* new_arr = new int[size + 1];

    // �������� ��� �������� �� ������� ������� � �����
    for (int i = 0; i < size; i++) {
        new_arr[i] = arr[i];
    }

    // ��������� ����� ������� � ��������� ������
    new_arr[size] = newElement;

    // ����������� ������ �������
    size++;

    // ����������� ������ ������� �������
    delete[] arr;

    // ������������� ��������� �� ����� ������
    arr = new_arr;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // ������� ��������� ������ �� 2 ���������
    int size = 2;
    int* arr = new int[size];

    // ��������� ������ �������
    arr[0] = 1;
    arr[1] = 2;

    // ������� �������� ������
    cout << "First massive : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // �������� ������� ���������� �������
    int newElement = 3;
    expanenda_arr(arr, size, newElement);

    // ������� ���������� ������
    cout << " Changed massive: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ����������� ���������� ������
    delete[] arr;

    return 0;
}*/
//dinamic ���� �����