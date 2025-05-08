#include <bits/stdc++.h>
#include <iostream>
#include "sorting/mergeSort.hpp"
#include "sorting/parallelMergeSort.hpp"
using namespace std;

int main(int argc, char *argv[]) {

    const int SIZE = 1000;
    vector<int> nums(SIZE);
    vector<int> nums1(SIZE);

    for(int i = 0; i < SIZE; i++) {
        nums[i] = rand() % 1000;
        nums1[i] = nums[i];
    }

    MergeSort* mergesort = new MergeSort(&nums);
    auto start = chrono::high_resolution_clock::now(); // chrono is time library, hence we are just checking the start time of the algo
    
    mergesort -> sort();

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> mergesortDuration = end - start;

    cout << "MergeSort Algorithm Time taken : " << mergesortDuration.count() << " seconds!" << endl;

    delete mergesort;

    ParallelMergeSort* mergesort1 = new ParallelMergeSort(&nums1);
    start = chrono::high_resolution_clock::now();
    mergesort1->sort();
    end = chrono::high_resolution_clock::now();
    chrono::duration<double> parallelMergeSortDuration = end - start;

    cout << "ParallelMergeSort time taken: " << parallelMergeSortDuration.count() << " seconds" << endl;

    delete mergesort1;
    return 0;
}