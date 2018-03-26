#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

void read(int **data, char **idname, char **idsubj);
void convert(int ***data, char **idname, char **idsubj, int **dataset);
void write(int **dataset);
