#include"header.h"
#include<assert.h>
int main()

{
	Array *my_arr,*my_arr2;
	my_arr=initialise(4);
	assert(my_arr->c_size==0 && my_arr->t_size==4);

	my_arr2=initialise(4);
	assert(my_arr2->c_size==0 && my_arr2->t_size==4);

	assert(insert(my_arr,1)== SUCCESS);
	assert(insert(my_arr,2)== SUCCESS);
	assert(insert(my_arr,2)== SUCCESS);
	assert(insert(my_arr,2)== SUCCESS);
	assert(insert(my_arr,3)== FULL);

	assert(insert(my_arr2,4)== SUCCESS);
	assert(insert(my_arr2,5)== SUCCESS);
	assert(insert(my_arr2,6)== SUCCESS);
	assert(insert(my_arr2,7)== SUCCESS);



	assert(search(my_arr,5)== NOT_FOUND);


	assert(merge(my_arr, my_arr2));
	assert((my_arr->t_size==8) == SUCCESS );




	return 0;

}
