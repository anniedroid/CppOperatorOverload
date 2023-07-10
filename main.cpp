#include <iostream>
#include <string>

using namespace std;

class Fruit
{
public:
    int quantity;
    int price;
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
    my_fruit.quantity = quantity - fruit.quantity;
    my_fruit.price = price - fruit.price;
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
    my_fruit.quantity = quantity / fruit.quantity;
    my_fruit.price = price / fruit.price;
    return my_fruit;
}

Fruit Fruit :: operator++()
{
    quantity++;
    price++;
    return *this;
}

int main() {
    Fruit mango(10, 10);
    Fruit coconut (5, 5);

    Fruit sum = mango + coconut;
    sum.printFruit();

    Fruit difference = mango - coconut;
    difference.printFruit();

    Fruit product = mango * coconut;
    product.printFruit();

    Fruit quotient = mango / coconut;
    quotient.printFruit();

    ++mango; // To Saad: why prefix increment works and postfix gives error?
    mango.printFruit();

    return 0;
}
