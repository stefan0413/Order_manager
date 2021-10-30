#include <iostream>
#include <vector>
#include <string>
#include "order.hpp"

using namespace std;

class Order_manager
{

private:
    vector<Order> orders;
    int max_num;
    int curr_parts;

public:
    Order_manager();
    Order_manager(int max_num, int curr_parts);

    void add_order(Order order);
    void print_orders();
    void save_to_file(string file_name);
    void load_form_file(string file_name);
};