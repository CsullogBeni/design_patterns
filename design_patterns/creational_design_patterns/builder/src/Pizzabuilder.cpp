#include "PizzaBuilder.hpp"


/**
 * @brief Default constructor of class PizzaBuilder.
 *
 * This constructor creates a new PizzaBuilder object and calls the Reset() method
 * to initialize the object.
 */
PizzaBuilder::PizzaBuilder()
{
    this->Reset();
}

/**
 * @brief Destructor of class PizzaBuilder.
 *
 * This destructor does nothing.
 */
PizzaBuilder::~PizzaBuilder()
{
}

/**
 * @brief Resets the PizzaBuilder to a default state.
 *
 * This method resets the PizzaBuilder to a default state by creating a new
 * Pizza object.
 */
void PizzaBuilder::Reset()
{
    this->pizza = new Pizza();
}

/**
 * @brief Adds San Marzano tomatoes to the pizza.
 *
 * This method adds San Marzano tomatoes to the pizza by calling the AddSanMarzano()
 * method of the Pizza class.
 */
void PizzaBuilder::AddSanMarzano()
{
    this->pizza->AddSanMarzano();
}

/**
 * @brief Adds Mozzarella cheese to the pizza.
 *
 * This method adds Mozzarella cheese to the pizza by calling the AddMozzarella()
 * method of the Pizza class.
 */
void PizzaBuilder::AddMozzarella()
{
    this->pizza->AddMozzarella();
}

/**
 * @brief Adds Olive Oil to the pizza.
 *
 * This method adds Olive Oil to the pizza by calling the AddOliveOil() method of
 * the Pizza class.
 */
void PizzaBuilder::AddOliveOil()
{
    this->pizza->AddOliveOil();
}

/**
 * @brief Adds Prosciutto Cotto to the pizza.
 *
 * This method adds Prosciutto Cotto to the pizza by calling the AddProscuittoCotto()
 * method of the Pizza class.
 */
void PizzaBuilder::AddProscuittoCotto()
{
    this->pizza->AddProscuittoCotto();
}

/**
 * @brief Adds Picante Salami to the pizza.
 *
 * This method adds Picante Salami to the pizza by calling the AddPicanteSalami()
 * method of the Pizza class.
 */
void PizzaBuilder::AddPicanteSalami()
{
    this->pizza->AddPicanteSalami();
}

/**
 * @brief Adds Grana Padano cheese to the pizza.
 *
 * This method adds Grana Padano cheese to the pizza by calling the AddGranaPadano()
 * method of the Pizza class.
 */
void PizzaBuilder::AddGranaPadano()
{
    this->pizza->AddGranaPadano();
}

/**
 * @brief Returns the constructed Pizza object.
 *
 * This method returns the constructed Pizza object and resets the PizzaBuilder
 * to a default state.
 *
 * @return A pointer to the constructed Pizza object.
 */
Pizza* PizzaBuilder::GetPizza()
{
    Pizza* result = this->pizza;
    this->Reset();
    return result;
}
