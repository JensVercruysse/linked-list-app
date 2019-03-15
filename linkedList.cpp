#include "linkedList.h"

LinkedList::LinkedList()
{
}

std::string to_string(Node *node)
{
    std::string output;
    while (node != nullptr)
    {
        output = node->get_data().to_string();
        node = node->get_next();
    }
    return output;
}