#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>

class Article
{
private:
    std::string code;
    std::string name;
    double price;

public:
    Article(std::string code, std::string name, double price);
    std::string getCode();
    std::string getName();
    double getPrice();
};

#endif // ARTICLE_H