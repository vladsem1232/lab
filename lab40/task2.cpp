#include<iostream>
#include<string>
using namespace std;

class product{
protected:
    string name;
    double price;
public:
    product(string n, double p) : name(n), price(p) {}
    virtual double getprice() const {
        return price;
    }
    string getname() const {
        return name;
    }
    virtual ~product() = default;
};

class discount : public product{
    double percent;
    double discountprice;
public:
    discount(string n, double p, double per)
        : product(n, p), percent(per), discountprice(p) {}

    double getprice() const override {
        return discountprice;
    }
    void applydiscount(double(*discountfunc)(double, double)) {
        discountprice = discountfunc(price, percent);
    }
};

int main() {
    auto discountlambda = [](double price, double percent) {
        return price * (1.0 - percent / 100.0);
    };

    discount prod1("Ноутбук", 20000, 10);
    discount prod2("Смартфон", 10000, 15);
    discount prod3("Навушники", 3000, 5);

    prod1.applydiscount(discountlambda);
    prod2.applydiscount(discountlambda);
    prod3.applydiscount(discountlambda);

    cout << prod1.getname() << ": Початкова ціна = " << 20000
         << ", зі знижкою = " << prod1.getprice() << endl;
    cout << prod2.getname() << ": Початкова ціна = " << 10000
         << ", зі знижкою = " << prod2.getprice() << endl;
    cout << prod3.getname() << ": Початкова ціна = " << 3000
         << ", зі знижкою = " << prod3.getprice() << endl;
    return 0;
}