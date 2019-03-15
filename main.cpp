#include <iostream>
#include "bull.h"
#include "node.h"
#include "linkedList.h"

using namespace std;

int main()
{
    Bull bull0(10, 10, "bulliewoelly0");
    Bull bull1(15, 15, "bulliewoelly1");
    Bull bull2(20, 20, "bulliewoelly2");

    Node start(bull0);
    Node second(bull1);
    Node last(bull2);

    second.set_next(&last);
    start.set_next(&second);

    LinkedList list;

    cout << list.to_string(&start) << endl;

    return 0;
}