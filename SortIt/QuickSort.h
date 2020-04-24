#pragma once
#include "SortBase.h"

class QuickSort : public SortBase
{
public:
	QuickSort() {};
	~QuickSort() {};

	// overrider
	void sort();
	
	/// <summary>
	/// sort an array using a quicksort algorithm
	/// </summary>
	void quickSort(int startingPoint, int endingPoint);
};
