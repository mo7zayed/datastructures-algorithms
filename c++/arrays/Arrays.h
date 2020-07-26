

class Arrays
{
private:
    int length = 0;
    int capacity = 0;
    int* data;

public:
    // Capacity
    int size();
    void resize(int size);
    int max_size();
    bool is_empty();
    bool check_idx(int idx);
    int reserve(int new_capacity);
    int shrink_to_fit();

    // Accessors
    int at(int idx);
    int front();
    int last();

    // Modifiers
    void assign(int idx, int value);
    void push(int idx, int value);
    void push_end(int value);
    void pop(int idx);
    void pop_end();
    void clear();
    void swap(int from_idx, int to_idx);
};
