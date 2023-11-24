#ifndef HEAP_HPP
#define HEAP_HPP

#include <iostream>

struct Node
{
    std::string ch;
    double prob;  
    Node *left, *right;
};

class MinHeap
{
public:
    MinHeap() : size(0), capacity(200), array(new Node *[200]) {}

    void insert(Node *minHeapNode)
    {
        ++size;
        int i = size - 1;

        while (i && minHeapNode->prob < array[(i - 1) / 2]->prob)
        {
            array[i] = array[(i - 1) / 2];
            i = (i - 1) / 2;
        }

        array[i] = minHeapNode;
    }

    Node *extractMin()
    {
        if (size <= 0)
            return nullptr;

        if (size == 1)
        {
            --size;
            return array[0];
        }

        Node *temp = array[0];
        array[0] = array[size - 1];
        --size;
        minHeapify(0);

        return temp;
    }

    int getSize() const
    {
        return size;
    }

private:
    int size;
    int capacity;
    Node **array;

    void minHeapify(int idx)
    {
        int smallest = idx;
        int left = 2 * idx + 1;
        int right = 2 * idx + 2;

        if (left < size && array[left]->prob < array[smallest]->prob)
            smallest = left;

        if (right < size && array[right]->prob < array[smallest]->prob)
            smallest = right;

        if (smallest != idx)
        {
            std::swap(array[idx], array[smallest]);
            minHeapify(smallest);
        }
    }
};

#endif // HEAP_HPP