#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <algorithm>


#include "Header.h"
using namespace std;
void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // int m;
     //cout << "Введите кол-во элементов в массиве\n";
     //cin >> m;
     //int* mas = new int [m];
    int m = 5;
    int mas[5] = { 20, 1, 5, 10, -17 };


    //for (int i = 0; i < m; i++) {
    //    mas[i] = rand();
   // }
    cout << "Изначальный массив:\n";
    printArr(mas, m);

    void(*z)(int* x, int size);
    z = fun(mas, m);
}
