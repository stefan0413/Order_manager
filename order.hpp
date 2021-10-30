#include <iostream>
#include <string>

using namespace std;

class Order
{

private:
    string name;
    string serial_number;
    int ordered_parts;
    int deadline;

public:
    Order();
    Order(string name,
          string serial_number,
          int ordered_parts,
          int deadline);

    string get_name();
    string get_serial_number();
    int get_order_parts();
    int get_deadline();

    void print_order();
};
