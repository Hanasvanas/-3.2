#pragma once
#include <iostream>
#include <algorithm>
using std::cout;
using std::endl;
void invert(int* mas, unsigned size);
void vozr(int* mas, unsigned size);
void ub(int* mas, unsigned size);
int sum(int a, int b);
int mapp(int* arr, unsigned size, int (*fun)(int, int));
void printArr(int* arr, unsigned size);
void (*fun(int* mas, int m))(int* x, int size);