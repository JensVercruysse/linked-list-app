#pragma once
#include "bull.h"

class Node
{
  public:
    Node(Bull data);

  public:
    void set_next(Node *node);
    Node *get_next(void);

    Bull get_data(void);

  private:
    Bull data;
    Node *next = nullptr;
};