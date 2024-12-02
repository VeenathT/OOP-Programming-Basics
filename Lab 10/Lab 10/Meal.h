#pragma once
class Meal {

private:
    int meal;
    char Description[50];
    double price;
  
public:
    Meal();
    Meal(int m,const char d[], double p);
    void setDetails(int no, const char pDesc[]);
    void setPrice(double pPrice);
    double getPrice();
    ~Meal();
};