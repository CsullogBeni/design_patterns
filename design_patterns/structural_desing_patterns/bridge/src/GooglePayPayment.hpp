#pragma once

#include "PaymentMethod.hpp"


/**
 * @class GooglePayPayment
 * @brief Class representing a Google Pay payment method.
 *
 * The GooglePayPayment class is a concrete implementation of the PaymentMethod
 * class that is used to process payments using Google Pay. This class overrides
 * the Pay method from the PaymentMethod interface to apply a Google Pay fee to
 * the payments.
 */
class GooglePayPayment : public PaymentMethod
{
private:
    /**
     * @brief The Google Pay fee.
     */
    static const float googlePayFee;
    
public:
    /**
     * @brief Constructor for GooglePayPayment.
     * @param paymentProcessor Pointer to a PaymentProcessor object.
     */
    GooglePayPayment(PaymentProcessor* paymentProcessor) : PaymentMethod(paymentProcessor) {}

    /**
     * @brief Process a payment using Google Pay.
     * @param amount The amount of the payment.
     * @return The processed payment amount.
     */
    float Pay(float amount) const override { return paymentProcessor->ProcessPayment(amount) * googlePayFee; }
};

const float GooglePayPayment::googlePayFee = 1.01;
