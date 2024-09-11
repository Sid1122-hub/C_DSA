#include "header.h"

Array * initialise(int size)
{
	Array *my_arr;
	my_arr =(Array * ) malloc(sizeof(int)* size);
	if (NULL == my_arr) return MEM_ALLOC_FAIL;

	my_arr->c_size = 0;
	my_arr->t_size=size;
	my_arr->arr = (int *) malloc(sizeof(int)*size);

	if(my_arr->arr == NULL){

		free(my_arr);
		return MEM_ALLOC_FAIL;
	}
	return my_arr;

}

int insert(Array *my_arr,int data)
{
	if (my_arr->c_size == my_arr->t_size) return FULL;

	*(my_arr->arr + my_arr->c_size)= data;
	my_arr->c_size++;
	return SUCCESS;


}

int search( Array *my_arr, int element)
{
	int i;
	for(i=0;i< my_arr->c_size;i++)
		if((my_arr->arr + i)== element) return FOUND;
		return NOT_FOUND;
}

int merge(Array *my_arr, Array*my_arr2)
{
	int updated_len,i;
	updated_len=(my_arr->c_size+my_arr2->c_size);
	my_arr->arr = realloc(my_arr->arr,sizeof(int)* updated_len);
	my_arr->t_size=updated_len;



	for(i=0;i<my_arr2->c_size;i++)
		my_arr->arr[my_arr->c_size+i]=my_arr2->arr[i];
		my_arr->c_size=updated_len;

	for(i=0;i< my_arr->c_size;i++)
		printf("%d",*(my_arr->arr+i));


}

