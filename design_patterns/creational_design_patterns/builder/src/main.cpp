#include "Pizza.hpp"
#include "Director.hpp"
#include "PizzaBuilder.hpp"


/**
 * @brief Demonstrates the Builder design pattern for creating different types of pizzas.
 *
 * This function creates a PizzaBuilder and a Director to demonstrate the construction
 * of various pizza types using the Builder design pattern. It builds and prints four
 * types of pizzas: Margherita, Cotto, Pizzizare, and Bianca, by setting the builder,
 * instructing the director to make each pizza, and then retrieving and displaying the
 * constructed pizza.
 */
int main(){

    PizzaBuilder* builder = new PizzaBuilder();
    Director* director = new Director();

    director->SetBuilder(builder);

    director->MakeMargherita();
    Pizza margherita = builder->GetPizza();
    std::cout << margherita.toString() << std::endl;

    director->MakeCotto();
    Pizza cotto = builder->GetPizza();
    std::cout << cotto.toString() << std::endl;

    director->MakePizzizare();
    Pizza pizzizare = builder->GetPizza();
    std::cout << pizzizare.toString() << std::endl;

    director->MakeBianca();
    Pizza bianca = builder->GetPizza();
    std::cout << bianca.toString() << std::endl;

    delete director;
    delete builder;
    
    return 0;
}