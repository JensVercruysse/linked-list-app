#include <iostream>
#include "bull.h"
#include "node.h"

using namespace std;

void print(Node *node)
{
    while (node != nullptr)
    {
        cout << node->get_data() << endl;
        node = node->get_next();
    }
}

int main()
{
    Bull bull0(10, 10, "bulliewoelly0");
    Bull bull1(15, 15, "bulliewoelly1");
    Bull bull2(20, 20, "bulliewoelly2");

    cout << bull0.to_string() << endl;
    cout << bull1.to_string() << endl;
    cout << bull2.to_string() << endl;

    Node start(0);
    Node second(1);
    Node last(2);

    second.set_next(&last);
    start.set_next(&second);

    print(&start);

    return 0;
}