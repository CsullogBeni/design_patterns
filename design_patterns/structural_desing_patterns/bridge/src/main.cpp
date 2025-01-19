#include <iostream>
#include "CreditCardPayment.hpp"
#include "GooglePayPayment.hpp"
#include "HungarianPaymentProcessor.hpp"
#include "USPaymentProcessor.hpp"
#include "PaymentMethod.hpp"
#include "PaymentProcessor.hpp"


/**
 * @brief Entry point of the program demonstrating the Bridge design pattern.
 *
 * This function creates instances of payment processors for Hungary and the US
 * and demonstrates payment processing using two different payment methods:
 * Credit Card and Google Pay. It applies respective taxes and fees for each
 * payment method and output the results. Represents client from the Bridge
 * design pattern.
 */

int main(){

    PaymentProcessor* paymentProcessor = new HungarianPaymentProcessor();
    PaymentMethod* paymentMethod = new CreditCardPayment(paymentProcessor);
    std::cout << "Payment process with credit card, with hungarian taxes: " << paymentMethod->Pay(100.0) << std::endl;
    delete paymentMethod;
    paymentMethod = new GooglePayPayment(paymentProcessor);
    std::cout << "Payment process with Google Pay, with hungarian taxes: " << paymentMethod->Pay(100.0) << std::endl;

    delete paymentMethod;
    delete paymentProcessor;

    paymentProcessor = new USPaymentProcessor();
    paymentMethod = new CreditCardPayment(paymentProcessor);
    std::cout << "Payment process with credit card, with US taxes: " << paymentMethod->Pay(100.0) << std::endl;
    delete paymentMethod;
    paymentMethod = new GooglePayPayment(paymentProcessor);
    std::cout << "Payment process with Google Pay, with US taxes: " << paymentMethod->Pay(100.0) << std::endl;

    delete paymentMethod;
    delete paymentProcessor;

    return 0;
}