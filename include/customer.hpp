#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer 
{
private:
    std::string code;
    std::string name;
    std::string address;

public:
    Customer(std::string code, std::string name, std::string address);
    std::string getCode();
    std::string getName();
    std::string getAddress();
};

#endif // CUSTOMER_H