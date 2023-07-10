#include <iostream>
#include <cmath>

using namespace std;

class Fruit
{
public:
    float quantity;
    float price;
    Fruit(int q = 0, int p = 0)
    {
        quantity = q;
        price = p;
    }
    void printFruit();
    Fruit operator+(Fruit &fruit);
    Fruit operator-(Fruit &fruit);
    Fruit operator*(Fruit &fruit);
    Fruit operator/(Fruit &fruit);
    Fruit operator++();
    Fruit operator++(int a);
};

void Fruit::printFruit()
{
    cout << "Quantity: " << quantity << endl;
    cout << "Price: " << price << endl;
}
Fruit Fruit::operator+(Fruit &fruit)
{
    Fruit my_fruit;
    my_fruit.quantity = quantity + fruit.quantity;
    my_fruit.price = price + fruit.price;
    return my_fruit;
}

Fruit Fruit::operator-(Fruit &fruit)
{
    Fruit my_fruit;
    my_fruit.quantity = abs(quantity - fruit.quantity);
    my_fruit.price = abs(price - fruit.price);
    return my_fruit;
}

Fruit Fruit::operator*(Fruit &fruit)
{
    Fruit my_fruit;
    my_fruit.quantity = quantity * fruit.quantity;
    my_fruit.price = price * fruit.price;
    return my_fruit;
}

Fruit Fruit::operator/(Fruit &fruit)
{
    Fruit my_fruit;
    if (fruit.quantity == 0)    my_fruit.quantity = 0;
    else { my_fruit.quantity = quantity / fruit.quantity; }
    if (fruit.price == 0)   my_fruit.price = 0;
    else { my_fruit.price = price / fruit.price; }
    return my_fruit;
}

Fruit Fruit :: operator++()
{
    quantity++;
    price++;
    return *this;
}

Fruit Fruit :: operator++(int a)
{
    quantity++;
    price++;
    return *this;
}

int main() {
    Fruit mango(10, 5);
    Fruit coconut (5, 0);

    Fruit sum = mango + coconut;
    sum.printFruit();

    Fruit difference = mango - coconut;
    difference.printFruit();

    Fruit product = mango * coconut;
    product.printFruit();

    Fruit quotient = mango / coconut;
    quotient.printFruit();

    ++mango;
    coconut++;
    mango.printFruit();
    coconut.printFruit();

    return 0;
}
