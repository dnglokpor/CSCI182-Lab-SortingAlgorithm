#pragma once

#include <iostream>
#include <vector>

using namespace std;

class SortBase
{
protected:
    vector<int> _mainVector;

public:
    SortBase() {};
    virtual ~SortBase() {};
    // copy constructor
    SortBase(const SortBase& old) { this->_mainVector = old._mainVector; }
    
    virtual void addItem(int item) { _mainVector.push_back(item); }
    virtual void dequeueItem() { _mainVector.front(); }
    virtual void sort() = 0;

    virtual void printVector() {
        for (auto& iterator : _mainVector) {
            cout << iterator << " ";
        }
        cout << endl;
    }

    /// <summary>
    /// Swaps the elements in the passed cell indexes.
    /// </summary>
    /// <param name="firstIndex"></param>
    /// <param name="secondIndex"></param>
    virtual void swap(int firstIndex, int secondIndex) {
        
        int swapperVariable = _mainVector[firstIndex];
        _mainVector[firstIndex] = _mainVector[secondIndex];
        _mainVector[secondIndex] = swapperVariable;
    }
};