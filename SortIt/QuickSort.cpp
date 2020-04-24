#include "QuickSort.h"

void QuickSort::sort() {
	
	// calls the quick sorting algorrithm
	quickSort(0, _mainVector.size() - 1);
}

void QuickSort::quickSort(int startingPoint, int endingPoint) {

	// check if #startingPoint is less than #endingPoint
	if(startingPoint < endingPoint){
		int pivotID = endingPoint; // set pivot
		// go through array from #startingPoint going up
		size_t j = pivotID - 1;
		for(size_t i = startingPoint; i < endingPoint - 1; i++) {
			// check for element bigger than pivot
			if (_mainVector[i] > _mainVector[pivotID]) {
				// look for a counterpart smaller element
				while (j > i && _mainVector[j] >= _mainVector[pivotID]) {
					j--;
				}
				// swap them
				if (j != i) {
					swap(i, j);
					printVector(); // for debugging
				}
			}
		}

		// put pivot at its right place
		if (_mainVector[j] > _mainVector[pivotID]) {
			swap(pivotID, j);
			pivotID = j;
		}
		

		if (pivotID != startingPoint) // check if pivot isn't first element
			quickSort(startingPoint, pivotID - 1); // quicksort the array to the left of the pivot
		if (pivotID != endingPoint) // check if pivot isn't last element
			quickSort(pivotID + 1, endingPoint); // quicksort the array to the right of the pivot
	}
}