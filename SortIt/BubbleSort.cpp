#include "BubbleSort.h"

void BubbleSort::sort() {
	bool wasSwapped = true;
	int tempSwapArea = 0;

	// loop until no swaps are found
	while (wasSwapped) {
		wasSwapped = false;
		for (size_t i = 0; i < SortBase::_mainVector.size() - 1; i++) {
			if (SortBase::_mainVector[i] > SortBase::_mainVector[i + 1]) {
				// swap them
				// tempSwapArea = SortBase::_mainVector[i + 1];
				// SortBase::_mainVector[i + 1] = SortBase::_mainVector[i];
				// SortBase::_mainVector[i] = tempSwapArea;
				swap(i, i + 1);
				wasSwapped = true;
				printVector(); // for debugging
			}
		}
	}
}