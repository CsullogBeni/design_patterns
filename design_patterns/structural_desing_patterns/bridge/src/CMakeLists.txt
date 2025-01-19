cmake_minimum_required(VERSION 3.10)

# Project name
project(BridgeProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
set(SOURCES
    main.cpp
)

# Add the header files
set(HEADERS
    CreditCardPayment.hpp
    GooglePayPayment.hpp
    PaymentMethod.hpp
    PaymentProcessor.hpp
    HungarianPaymentProcessor.hpp
    USPaymentProcessor.hpp
)

# Add the executable
add_executable(bridge ${SOURCES} ${HEADERS})
