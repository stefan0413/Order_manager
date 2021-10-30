#include "order.hpp"

using namespace std;

Order::Order()
{
    this->name = "";
    this->serial_number = "";
    this->ordered_parts = 0;
    this->deadline = 0;
}

Order::Order(string name,
             string serial_number,
             int ordered_parts,
             int deadline)
{

    this->name = name;
    this->serial_number = serial_number;
    this->ordered_parts = ordered_parts;
    this->deadline = deadline;
}

int Order::get_order_parts()
{
    return this->ordered_parts;
}

int Order::get_deadline()
{

    return this->deadline;
}

string Order::get_name()
{

    return this->name;
}

string Order::get_serial_number()
{

    return this->serial_number;
}

void Order::print_order()
{
    cout << "The order's name is: " << name << endl;
    cout << "The order's serial number is: " << serial_number << endl;
    cout << "The order's ordered_parts are: " << ordered_parts << endl;
    cout << "The order's deadline: " << deadline << endl;
}
