#include <iostream>
#include <stdexcept>

using namespace std;

class FileNotFoundException : public exception
{
    private:
        string msg;

    public:
        FileNotFoundException(string msg){
            this->msg = "User defined exception was thrown." + msg + "was not found";

        }

        virtual const char* what() const noexcept{

            return this->msg.c_str();
        }

};

class EmptyFileException : public exception{

    private:
        string msg;

    public:

        EmptyFileException(string msg ){
            this->msg = "User defined exception was thrown. " + msg + "is empty";
        }

        virtual const char* what() const noexcept{

            return this->msg.c_str();
        }
};

class ImpossibleOrder : public exception    {

    private:
        string msg;
    public:

        ImpossibleOrder(string msg) {
            this->msg = "User defined exception was thrown." + msg;
        }

        virtual const char* what() const noexcept{

            return this->msg.c_str();
        }
};




