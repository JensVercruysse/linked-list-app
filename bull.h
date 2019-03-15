#pragma once

#include <string>

class Bull
{
  public:
    Bull(int weight, int liftCapacity, std::string name);
    Bull();

  private:
    int weight = 0;
    int liftCapacity = 0;
    std::string name = "";

  public:
    std::string to_string(void);
};