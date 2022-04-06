//
// Created by Maikol Guzman Alan on 4/6/22.
//
#include <iostream>
using namespace std;

#ifndef MY_PROJECT_NAME_UTILS_H
#define MY_PROJECT_NAME_UTILS_H

/**
 * One function works for all data types.  This would work
 * even for user defined types if operator '>' is overloaded
 * @tparam T Generic data type
 * @param valX Value X
 * @param valY Value Y
 * @return the max value
 */
template <typename T>
T myMaxValue(T valX, T valY)
{
    return (valX > valY) ? valX : valY;
}

/**
 * A template function to implement bubble sort.
 * We can use this for any data type that supports
 * comparison operator < and swap works for it.
 * @tparam T Generic data type
 * @param dataList
 * @param num
 */
template <class T>
void bubbleSort(T dataList[], int num) {
    for (int i = 0; i < num - 1; i++)
        for (int j = num - 1; i < j; j--)
            if (dataList[j] < dataList[j - 1])
                swap(dataList[j], dataList[j - 1]);
}

#endif //MY_PROJECT_NAME_UTILS_H
