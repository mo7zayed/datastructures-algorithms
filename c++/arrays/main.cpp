#include <iostream>

#include "Arrays.h"

using namespace std;

int main()
{
    Arrays a;

    cout << " a.size() is => " << a.size() << endl;
    cout << " a.max_size() is => " << a.max_size() << endl;
    cout << " a.is_empty() is => " << a.is_empty() << endl;

    for (auto i = 0; i < 1000; i++)
        a.push_end(i);

    cout << " a.size() is => " << a.size() << endl;
    cout << " a.max_size() is => " << a.max_size() << endl;
    cout << " a.is_empty() is => " << a.is_empty() << endl;

    cout << " a.front() is => " << a.front() << endl;
    cout << " a.last() is => " << a.last() << endl;
    cout << " a.at(999) is => " << a.at(999) << endl;

    cout << " Running a.shrink_to_fit() " << endl;
    a.shrink_to_fit();

    cout << " a.size() is => " << a.size() << endl;
    cout << " a.max_size() is => " << a.max_size() << endl;
    cout << " a.is_empty() is => " << a.is_empty() << endl;

    cout << " Running a.resize(100) " << endl;
    a.resize(100);

    cout << " a.size() is => " << a.size() << endl;
    cout << " a.max_size() is => " << a.max_size() << endl;
    cout << " a.is_empty() is => " << a.is_empty() << endl;

    cout << " a.front() is => " << a.front() << endl;
    cout << " a.last() is => " << a.last() << endl;
    cout << " a.at(999) is => " << a.at(99) << endl;

    return 0;
}