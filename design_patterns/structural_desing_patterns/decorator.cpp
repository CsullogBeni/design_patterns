#include <iostream>
#include <string>
#include <memory>

// Component interface
class Component {
public:
    virtual ~Component() = default;
    virtual std::string operation() const = 0;
};

// Concrete Component: Alap kávé
class Coffee : public Component {
public:
    std::string operation() const override {
        return "Coffee";
    }
};

// Base Decorator
class CoffeeDecorator : public Component {
protected:
    std::shared_ptr<Component> component;

public:
    CoffeeDecorator(std::shared_ptr<Component> comp) : component(std::move(comp)) {}

    std::string operation() const override {
        return component->operation();
    }
};

// Concrete Decorator A: Tej hozzáadása
class MilkDecorator : public CoffeeDecorator {
public:
    MilkDecorator(std::shared_ptr<Component> comp) : CoffeeDecorator(std::move(comp)) {}

    std::string operation() const override {
        return CoffeeDecorator::operation() + ", Milk";
    }
};

// Concrete Decorator B: Cukor hozzáadása
class SugarDecorator : public CoffeeDecorator {
public:
    SugarDecorator(std::shared_ptr<Component> comp) : CoffeeDecorator(std::move(comp)) {}

    std::string operation() const override {
        return CoffeeDecorator::operation() + ", Sugar";
    }
};

// Concrete Decorator C: Hab hozzáadása
class FoamDecorator : public CoffeeDecorator {
public:
    FoamDecorator(std::shared_ptr<Component> comp) : CoffeeDecorator(std::move(comp)) {}

    std::string operation() const override {
        return CoffeeDecorator::operation() + ", Foam";
    }
};

#include <iostream>
#include <memory>
#include "decorator_pattern_cpp.h"

int main() {
    // Alapkávé
    std::shared_ptr<Component> coffee = std::make_shared<Coffee>();
    std::cout << "Basic coffee: " << coffee->operation() << std::endl;

    // Tejes kávé
    std::shared_ptr<Component> milkCoffee = std::make_shared<MilkDecorator>(coffee);
    std::cout << "Milk coffee: " << milkCoffee->operation() << std::endl;

    // Tejes-cukros kávé
    std::shared_ptr<Component> milkSugarCoffee = std::make_shared<SugarDecorator>(milkCoffee);
    std::cout << "Milk and sugar coffee: " << milkSugarCoffee->operation() << std::endl;

    // Tejes-cukros habos kávé
    std::shared_ptr<Component> fancyCoffee = std::make_shared<FoamDecorator>(milkSugarCoffee);
    std::cout << "Fancy coffee: " << fancyCoffee->operation() << std::endl;

    return 0;
}

