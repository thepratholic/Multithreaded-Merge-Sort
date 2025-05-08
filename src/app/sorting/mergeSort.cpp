#include <mergeSort.hpp>
using namespace std;

MergeSort::MergeSort(vector<int> *nums) {
    this -> nums = nums;
}

MergeSort::~MergeSort() {}

void MergeSort::recursiveSort(int left, int right) {

}


void MergeSort::sort() {
    if((*nums).size() == 0) {
        return;
    }

    recursiveSort(0, (*nums).size());
}