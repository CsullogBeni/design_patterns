#pragma once

#include "PaymentProcessor.hpp"


/**
 * @class USPaymentProcess
 * @brief Concrete implementation of PaymentProcessor for processing payments in the US.
 *
 * The USPaymentProcess class is responsible for processing payments by applying
 * a fixed tax rate specific to the US. This class overrides the processPayment
 * method from the PaymentProcessor interface.
 */
class USPaymentProcessor : public PaymentProcessor
{
private:
    /**
     * @brief Tax rate applied to payments.
     */
    static const float taxUS;

public:
    /**
     * @brief Constructor for USPaymentProcess.
     */
    USPaymentProcessor() {};

    /**
     * @brief Destructor for USPaymentProcess.
     */
    ~USPaymentProcessor() {};

    /**
     * @brief Process a payment by applying the US tax rate.
     * @param amount The amount of the payment.
     * @return The processed payment amount.
     */
    float ProcessPayment(float amount) override { return amount * taxUS; };
};

const float USPaymentProcessor::taxUS = 1.04;
