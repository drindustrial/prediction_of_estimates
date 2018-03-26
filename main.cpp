#include"dataset.h"
#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int **data=0;
	char **idname=0;
	char **idsubj=0;
	read(data,idname,idsubj);
	system("pause");
}
