#include <iostream>
#include <string>

#include "exceptions.hpp"
#include "order_manager.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    Order_manager orderManager(10, 0);
    Order order("Cigari", "fjakjfsd3434", 20, 3);

    try{
        orderManager.add_order(order);
        
        orderManager.load_form_file("orders.txt");
    }catch FileNotFoundException (FileNot){


    }
    orderManager.print_orders();

    return 0;
}