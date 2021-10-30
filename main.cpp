#include <iostream>
#include <string>

#include "order_manager.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    Order_manager orderManager(10, 0);

    Order order("Bokluchki", "1234a", 50, 6);

    orderManager.add_order(order);

    orderManager.print_orders();

    return 0;
}