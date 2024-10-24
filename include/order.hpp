#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <string>
#include <list>
#include "Customer.hpp"
#include "Article.hpp"

class Order 
{
private:
    std::string code;
    Customer* customer;
    std::list<Article*> articleList;

public:
    Order(std::string code, Customer* customer);
    void attach(Article* article);
    void show();    
};

#endif // ORDER_H