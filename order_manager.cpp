#include <cmath>
#include <fstream>

#include "order_manager.hpp"

using namespace std;

Order_manager::Order_manager(int max_num, int curr_parts)
{
    this->max_num = max_num;
    this->curr_parts = curr_parts;
}

void Order_manager::add_order(Order order)
{
    orders.push_back(order);
    curr_parts += order.get_order_parts();
}

void Order_manager::print_orders()
{

    for (int i = 0; i < orders.size(); i++)
    {
        orders[i].print_order();
    }

    cout << "All parts: " << curr_parts << endl;
    cout << "Days needed: " << ceil((double)(curr_parts / max_num)) << endl;
    cout << "Days before: " << orders[orders.size() - 1].get_deadline() - ceil((double)(curr_parts / max_num)) << endl;
}

void Order_manager :: save_to_file(string file_name)
{
    fstream myfile(file_name, ios::app);
    
    if( myfile.is_open() ){

        for (int i = 0; i < orders.size(); i++)
        {
            myfile << orders[i].get_name() << endl;
            myfile << orders[i].get_serial_number() << endl;
            myfile << orders[i].get_order_parts() << endl;
            myfile << orders[i].get_deadline() << endl;
        }

        myfile.close();

    }else{

        // EXCEPTION
    }
}

void Order_manager :: load_form_file (string file_name)
{
    string line;
    ifstream myfile(file_name);
    
    if( myfile.is_open() ) {
        
        while(myfile, EOF){
            int i = 0;
            Order order;
                orders[i].set_name(getline (myfile,line));
                orders[i].set_serial_number(getline(myfile,line));
                orders[i].set_order_parts(getline(myfile, line));
                orders[i].set_deadline(getline(myfile, line));
            
        }

        myfile.close();
    }



}
