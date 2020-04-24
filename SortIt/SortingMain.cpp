#include <stdlib.h>
#include "SortingMain.h"
#include "BubbleSort.h"
#include "QuickSort.h"

int SortingMain::Run() {
	
	// create data
	int arr[] = { 29, 10, 14, 37, 14 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	
	// show menu
	system("CLS");
	cout << endl;
	cout << "Pick a sort method: " << endl;
	cout << "1) Bubble Sort" << endl;
	cout << "2) Quick Sort" << endl;

	// process selection
	int nSelection = 0;
	cin >> nSelection;
	switch (nSelection) {
	case 1:
		pSortBase = new BubbleSort();
		break;
	case 2:
		pSortBase = new QuickSort();
		break;
	default:
		cout << "Bad Input, goodbye" << endl;
		break;
	}

	// fill the vector with the items from the array
	for (int i = 0; i < arrSize; i++) {
		pSortBase->addItem(arr[i]);
	}
	
	// show the results
	cout << endl << endl << "Before Sort: ";
	pSortBase->printVector();
	cout << endl << "*****************Sorting*****************" << endl;
	pSortBase->sort();
	cout << endl << "After Sort: ";
	pSortBase->printVector();

	return 0;
}