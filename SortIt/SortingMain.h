#pragma once

#include "SortBase.h"

class SortingMain
{
private:
	SortBase* pSortBase = nullptr;
public:
	~SortingMain() {

		// Auto-delete if object was created
		if (pSortBase != nullptr)
			delete pSortBase;
	};

	// my single run function
	int Run();
};

