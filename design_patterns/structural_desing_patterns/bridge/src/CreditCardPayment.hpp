#pragma once

#include "PaymentMethod.hpp"


/**
 * @class CreditCardPayment
 * @brief Class representing a credit card payment method.
 *
 * The CreditCardPayment class is a concrete implementation of the PaymentMethod
 * class that is used to process payments using a credit card. This class
 * overrides the Pay method from the PaymentMethod interface to apply a credit
 * card fee to the payments.
 */
class CreditCardPayment : public PaymentMethod
{
private:
    /**
     * @brief The credit card fee.
     */
    static const float creditCardFee;
public:
    /**
     * @brief Constructor for CreditCardPayment.
     * @param paymentProcessor Pointer to a PaymentProcessor object.
     */
    CreditCardPayment(PaymentProcessor* paymentProcessor) : PaymentMethod(paymentProcessor) {}

    /**
     * @brief Process a payment using a credit card.
     * @param amount The amount of the payment.
     * @return The processed payment amount.
     */
    float Pay(float amount) const override {return paymentProcessor->ProcessPayment(amount) * creditCardFee;}
};

const float CreditCardPayment::creditCardFee = 1.02;

