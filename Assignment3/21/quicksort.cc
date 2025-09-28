#include "quicksort.h"
#include <iostream>

using namespace std;
size_t partition(string array[], size_t left, size_t right)
{
    char pivot = tolower(array[left][0]);
    size_t left_bound = left + 1;
    size_t right_bound = right - 1;

    while (true)
    {
        while (left_bound <= right_bound && tolower(array[left_bound][0]) < pivot)
            ++left_bound;
        while (left_bound <= right_bound && tolower(array[right_bound][0]) > pivot)
            --right_bound;
        if (left_bound >= right_bound)
            break;
        swap(array[left_bound], array[right_bound]);
        ++left_bound;
        --right_bound;
    }
    swap(array[left], array[right_bound]);
    return right_bound;
}


void quicksort(string array[], size_t left_value, size_t right_value)
{
    if (left_value < right_value - 1)
    {
        size_t pivotIndex = partition(array, left_value, right_value);
        quicksort(array, left_value, pivotIndex);
        quicksort(array, pivotIndex + 1, right_value);
    }
}


void separateWords(size_t word_count, string words[], string sentence, char delim)
{
    size_t str_index = 0;
    for (size_t word_index = 0; word_index != word_count; ++word_index)
    {
        string current_word;
        for (size_t letter_idx = str_index; letter_idx != sentence.length(); ++letter_idx) {
            if (sentence[letter_idx] == delim) {
                break;
            }
            current_word += sentence[letter_idx];
            ++str_index;
        }
        words[word_index] = current_word;
        ++str_index;
    }

}
