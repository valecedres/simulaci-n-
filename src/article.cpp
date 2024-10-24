#include "../include/Article.hpp"

Article::Article(std::string code, std::string name, double price)
{
    this->code = code;
    this->name = name;
    this->price = price;
}

std::string Article::getCode()
{
    return this->code;
}

std::string Article::getName()
{
    return this->name;
}

double Article::getPrice()
{
    return this->price;
}