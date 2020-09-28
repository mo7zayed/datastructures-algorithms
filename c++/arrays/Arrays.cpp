#include "Arrays.h"

int Arrays::size()
{
    return length;
}

int Arrays::max_size()
{
    return capacity;
}

bool Arrays::is_empty()
{
    return length == 0;
}

void Arrays::resize(int size)
{
    // Initialize a new array with the new capacity
    int *temp = new int[size];

    // copy the elements in the current array to the new array
    for (int i = 0; i < size; i++)
    {
        if (at(i))
            temp[i] = data[i];
    }

    // set the temp array with new capacity to be the array
    data = temp;

    // set the current capacity of the array to be the new capacity
    capacity = size;

    length = size;
}

int Arrays::reserve(int new_capacity)
{
    // Initialize a new array with the new capacity
    int *temp = new int[new_capacity];

    // copy the elements in the current array to the new array
    for (int i = 0; i < length; i++)
        temp[i] = data[i];

    // set the temp array with new capacity to be the array
    data = temp;

    // set the current capacity of the array to be the new capacity
    capacity = new_capacity;
}

int Arrays::shrink_to_fit()
{
    reserve(length);
}

bool Arrays::idx_valid(int idx)
{
    return idx < 0 || idx > length;
}

int Arrays::at(int idx)
{
    if (idx_valid(idx))
        return -1;

    return data[idx];
}

int Arrays::front()
{
    return *data;
}

int Arrays::last()
{
    return data[length - 1];
}

void Arrays::assign(int idx, int value)
{
    if (idx_valid(idx))
        return;

    data[idx] = value;
}

void Arrays::push(int idx, int value)
{
    if (idx_valid(idx))
        return;

    // check if we need to update the capacity of the array
    if (length == capacity)
        reserve(2 * capacity + 1);

    data[idx] = value;

    length++;
}

void Arrays::push_end(int value)
{
    push(length, value);
}