#pragma once

#include "Builder.hpp"
#include "Pizza.hpp"


/**
 * This class implements the Builder design pattern. It is a concrete
 * builder class that creates a Pizza object by using the methods of
 * class Pizza. It provides methods to add specific ingredients to a
 * pizza. It tracks the presence of ingredients like San Marzano, Mozzarella,
 * Olive Oil, Proscuitto Cotto, Picante Salami, and Grana Padano.
 *
 * This class is a friend class of class Pizza, so it can access the
 * private and protected members of class Pizza.
 */
class PizzaBuilder : public Builder
{
private:
    /**
     * This is a pointer to the object of class Pizza that is being
     * constructed by the builder.
     */
    Pizza* pizza;
public:
    /**
     * Constructor: Initializes a new PizzaBuilder object with a
     * default Pizza object.
     */
    PizzaBuilder();

    /**
     * Destructor: Cleans up the PizzaBuilder object.
     */
    ~PizzaBuilder();

    /**
     * @brief Resets the builder to its initial state.
     *
     * This method resets the builder to its initial state, so it
     * can be used to construct a new Pizza object.
     */
    void Reset() override;

    /**
     * @brief Adds San Marzano tomatoes to the pizza.
     *
     * This method adds San Marzano tomatoes to the pizza that is
     * being constructed by the builder.
     */
    void AddSanMarzano();

    /**
     * @brief Adds Mozzarella cheese to the pizza.
     *
     * This method adds Mozzarella cheese to the pizza that is
     * being constructed by the builder.
     */
    void AddMozzarella();

    /**
     * @brief Adds Olive Oil to the pizza.
     *
     * This method adds Olive Oil to the pizza that is being
     * constructed by the builder.
     */
    void AddOliveOil();

    /**
     * @brief Adds Proscuitto Cotto to the pizza.
     *
     * This method adds Proscuitto Cotto to the pizza that is
     * being constructed by the builder.
     */
    void AddProscuittoCotto();

    /**
     * @brief Adds Picante Salami to the pizza.
     *
     * This method adds Picante Salami to the pizza that is
     * being constructed by the builder.
     */
    void AddPicanteSalami();

    /**
     * @brief Adds Grana Padano cheese to the pizza.
     *
     * This method adds Grana Padano cheese to the pizza that is
     * being constructed by the builder.
     */
    void AddGranaPadano();

    /**
     * @brief Returns the constructed Pizza object.
     *
     * This method returns the constructed Pizza object and resets
     * the builder to its initial state.
     *
     * @return A pointer to the constructed Pizza object.
     */
    Pizza* GetPizza();
};
