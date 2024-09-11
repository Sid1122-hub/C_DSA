#define MEM_ALLOC_FAIL NULL
#define SUCCESS 1
#define FULL -1
#define FOUND -1
#define NOT_FOUND 0

#include<stdio.h>
#include<stdlib.h>

struct _array_
{
	int *arr;
	int c_size,t_size;
};
typedef struct _array_ Array;

Array * initialise(int);
int insert(Array * , int);
int search(Array *,int);
int merge(Array *, Array *);
void display(Array *);
