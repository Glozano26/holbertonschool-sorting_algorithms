#include "sort.h"
/**
  *cambiar_pos - intercambia el valor
  *@n1: pointer n1
  *@n2: pointer n2
  */
void cambiar_pos(int *n1, int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
/**
  *bubble_sort - function that sorts an array of integers in ascending
  *@array: array to sort
  *@size: size of array
  *Return: void
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				cambiar_pos(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}

}
