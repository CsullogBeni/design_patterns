#pragma once

#include "iostream"


/**
 * @brief Represents a Pizza with various ingredients.
 *
 * This class provides methods to add specific ingredients to a pizza.
 * It tracks the presence of ingredients like San Marzano, Mozzarella,
 * Olive Oil, Proscuitto Cotto, Picante Salami, and Grana Padano.
 */
class Pizza
{
private:
    /** Indicates if San Marzano tomatoes are added. */
    bool sanMarzano;        

    /** Indicates if Mozzarella cheese is added. */
    bool mozzarella;        

    /** Indicates if Olive Oil is added. */
    bool oliveOil;          

    /** Indicates if Proscuitto Cotto is added. */
    bool proscuittoCotto;   

    /** Indicates if Picante Salami is added. */
    bool picanteSalami;     

    /** Indicates if Grana Padano cheese is added. */
    bool granaPadano;       
public:
    /** Constructor: Initializes a new Pizza with no ingredients. */
    Pizza(); 

    /** Destructor: Cleans up the Pizza. */
    ~Pizza(); 

    /** Adds San Marzano tomatoes to the pizza. */
    void AddSanMarzano(); 

    /** Adds Mozzarella cheese to the pizza. */
    void AddMozzarella(); 

    /** Adds Olive Oil to the pizza. */
    void AddOliveOil(); 

    /** Adds Proscuitto Cotto to the pizza. */
    void AddProscuittoCotto(); 

    /** Adds Picante Salami to the pizza. */
    void AddPicanteSalami();

    /** Adds Grana Padano cheese to the pizza. */
    void AddGranaPadano();

    /** Returns a string representation of the pizza's ingredients. */
    std::string toString();
};
