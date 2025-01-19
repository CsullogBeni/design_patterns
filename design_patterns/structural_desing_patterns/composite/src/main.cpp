#include <iostream>
#include "Box.hpp"
#include "CompositeBox.hpp"
#include "Product.hpp"


/**
 * @brief The main function demonstrates the use of the composite design pattern.
 * It creates a hierarchy of boxes and products, and performs operations on them.
 * The function also shows how to handle cases when the hierarchy is empty.
 */
int main(){
    Box* phone = new Product("phone", 1000);
    Box* tablet = new Product("tablet", 2000);

    CompositeBox* box = new CompositeBox();
    box->Add(phone);
    box->Add(tablet);

    Box* phoneCase = new Product("phone case", 20);
    Box* cable = new Product("cable", 10);

    CompositeBox* box2 = new CompositeBox();
    box2->Add(phoneCase);
    box2->Add(cable);

    box->Add(box2);

    std::cout << box->GetValue() << std::endl;
    std::cout << box->GetName() << std::endl;

    delete box;

    phone = new Product("phone", 1000);
    box = new CompositeBox();

    box->Add(phone);
    std::cout << box->GetChild(0)->GetValue() << std::endl;
    box->Remove(phone);
    try
    {
        std::cout << box->GetChild(0)->GetValue() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    delete box;
    delete phone;

    return 0;
}