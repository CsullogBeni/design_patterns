#pragma once


/**
 * @class PaymentProcessor
 * @brief An abstract base class for payment processors.
 *
 * The PaymentProcessor class is an abstract base class that provides a
 * common interface for all payment processors. It has a single method,
 * processPayment, which must be implemented by each concrete payment
 * processor. This is the inmplementation interface from bridge pattern.
 */
class PaymentProcessor {
public:
    /**
     * @brief Process a payment.
     *
     * This method processes a payment of the given amount.
     *
     * @param amount The amount of the payment.
     * @return The processed payment amount.
     */
    virtual float ProcessPayment(float amount) = 0;
};
