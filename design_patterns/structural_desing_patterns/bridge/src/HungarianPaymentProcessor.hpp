#pragma once

#include "PaymentProcessor.hpp"


/**
 * @class HungarianPaymentProcessor
 * @brief Concrete implementation of PaymentProcessor for processing payments in Hungary.
 *
 * The HungarianPaymentProcessor class is responsible for processing payments by applying
 * a fixed tax rate specific to Hungary. This class overrides the processPayment
 * method from the PaymentProcessor interface.
 */
class HungarianPaymentProcessor : public PaymentProcessor
{
private:
    /**
     * @brief Tax rate applied to payments.
     */
    static const float taxHU;

public:
    /**
     * @brief Constructor for HungarianPaymentProcessor.
     */
    
    HungarianPaymentProcessor() {};
    /**
     * @brief Destructor for HungarianPaymentProcessor.
     */

    ~HungarianPaymentProcessor() {};
    /**
     * @brief Process a payment by applying the Hungarian tax rate.
     * @param amount The amount of the payment.
     * @return The processed payment amount.
     */
    float ProcessPayment(float amount) override { return amount * taxHU;}
};

const float HungarianPaymentProcessor::taxHU = 1.27;