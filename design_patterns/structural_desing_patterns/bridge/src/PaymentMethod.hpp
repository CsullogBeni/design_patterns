#pragma once

#include "PaymentProcessor.hpp"


/**
 * @class PaymentMethod
 * @brief Class representing a payment method.
 *
 * This class is an interface for different payment methods. It holds a pointer to a
 * PaymentProcessor object and uses it to process payments. This is the abstraction 
 * class from the bridge pattern. Uses by the client to process payments.
 */
class PaymentMethod {
protected:
    /**
     * @var paymentProcessor
     * @brief Pointer to a PaymentProcessor object used to process payments.
     */
    PaymentProcessor* paymentProcessor;

public:
    /**
     * @brief Constructor.
     * @param paymentProcessor Pointer to a PaymentProcessor object.
     */
    PaymentMethod(PaymentProcessor* paymentProcessor) : paymentProcessor(paymentProcessor) {}
    
    /**
     * @brief Destructor.
     */
    ~PaymentMethod() {}

    /**
     * @brief Pure virtual method that must be implemented by each derived class.
     * It processes a payment of the given amount.
     * @param amount The amount of the payment.
     * @return The processed payment amount.
     */
    virtual float Pay(float amount) const = 0;
};
