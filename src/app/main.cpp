#include <bits/stdc++.h>
#include <iostream>
#include "sorting/mergeSort.hpp"
using namespace std;

int main(int argc, char *argv[]) {

    const int SIZE = 1000;
    vector<int> nums(SIZE);

    for(int i = 0; i < SIZE; i++) {
        nums[i] = rand() % 1000;
    }

    MergeSort* mergesort = new MergeSort(&nums);
    auto start = chrono::high_resolution_clock::now(); // chrono is time library, hence we are just checking the start time of the algo
    
    mergesort -> sort();

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> mergesortDuration = end - start;

    
}