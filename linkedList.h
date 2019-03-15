#pragma once
#include "node.h"

#include <string>

class LinkedList
{
  public:
    LinkedList();

  public:
    std::string to_string(Node * node);
};