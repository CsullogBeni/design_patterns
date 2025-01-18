#include "Director.hpp"

/**
 * @brief Construct a new Director:: Director object
 * 
 */
Director::Director() {}

/**
 * @brief Destructor of the director class
 * 
 */
Director::~Director() {}

/**
 * @brief Sets the builder.
 * @param builder The builder to be used.
 */
void Director::SetBuilder(PizzaBuilder* builder) {
    this->builder = builder;
}

/**
 * @brief Resets the builder and adds SanMarzano, Mozzarella and OliveOil.
 */
void Director::MakeMargherita() {
    this->builder->Reset();
    this->builder->AddSanMarzano();
    this->builder->AddMozzarella();
    this->builder->AddOliveOil();
}

/**
 * @brief Resets the builder and adds SanMarzano, Mozzarella, ProsciuttoCotto and OliveOil.
 */
void Director::MakeCotto() {
    this->builder->Reset();
    this->builder->AddSanMarzano();
    this->builder->AddMozzarella();
    this->builder->AddProscuittoCotto();
    this->builder->AddOliveOil();
}

/**
 * @brief Resets the builder and adds SanMarzano, Mozzarella, PicanteSalami and OliveOil.
 */
void Director::MakePizzizare() {
    this->builder->Reset();
    this->builder->AddSanMarzano();
    this->builder->AddMozzarella();
    this->builder->AddPicanteSalami();
    this->builder->AddOliveOil();
}


/**
 * @brief Resets the builder and adds Mozzarella and GranaPadano.
 */
void Director::MakeBianca() {
    this->builder->Reset();
    this->builder->AddMozzarella();
    this->builder->AddGranaPadano();
}
