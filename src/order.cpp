#include "../include/Order.hpp"

Order::Order(std::string code, Customer* customer)
{
    this->code = code;
    this->customer = customer; 
}

void Order::attach(Article* article)
{
    this->articleList.push_front(article);
}

void Order::show()
{
    std::cout << "Cliente: " << this->customer->getName() << std::endl;
    for (auto article : articleList)
    {
        std::cout << "Código de Artículo: " << article->getCode() << std::endl;
        std::cout << "Nombre de Artículo: " << article->getName() << std::endl;
        std::cout << std::endl;
    }
}