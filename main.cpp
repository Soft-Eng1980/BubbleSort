#include <iostream>
#include <conio.h>
using namespace std;

/// @brief Since Bubblesort function body implemented below main function, I declare it Interface shape here to avoid future ambiguousness and unpredicted behaviors
/// @param
/// @param lenght  The lenght of Array
void BubbleSort(int[] , int lenght);

int main(int argc, char** argv) {
	int array[10];
	
	for(int i = 0; i < 10; i++ )
	{
		cout<< "\n Number " << i + 1 << " : ";
		cin>> array[i];
	}
	
	BubbleSort(array, 10);
	
	cout<< "\nPress any key to exit ...";
	getch();

	return 0;
}

/// @brief The BubbleSort algorithm function
/// @param array An unordered array need to be sorted
/// @param lenght Lenght of the array
void BubbleSort(int array[], int lenght){
	int i, j, tmp;
	for(i = 0 ; i < lenght; i++ )
	{
		for(j = 0; j < lenght - i - 1; j++ )
		{
			if(array[j] > array[j + 1] )
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}			
		}
	}
	
	cout<< "\n";
	
	for(i = 0; i < lenght; i++ )
	{
		cout<< array[i] << "\n";
	}
}
