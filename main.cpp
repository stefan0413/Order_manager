#include <iostream>
#include <string>

#include "order_manager.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    Order_manager orderManager(10, 0);

    orderManager.load_form_file("orders.txt");

    orderManager.print_orders();

    return 0;
}