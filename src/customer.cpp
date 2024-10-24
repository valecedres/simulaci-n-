#include "../include/Customer.hpp"

Customer::Customer(std::string code, std::string name, std::string address)
{
    this->code = code;
    this->name = name;
    this->address = address;
}

std::string Customer::getCode()
{
    return this->code;
}

std::string Customer::getName()
{
    return this->name;
}

std::string Customer::getAddress()
{
    return this->address;
}
