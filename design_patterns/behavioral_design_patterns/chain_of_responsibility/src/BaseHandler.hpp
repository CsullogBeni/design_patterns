#pragma once

#include <iostream>
#include "Password.hpp"


/**
 * @class BaseHandler
 * @brief Base class for concrete handlers in the chain of responsibility pattern.
 *
 * This class provides an interface for concrete handlers in the chain of
 * responsibility pattern. It contains a pointer to the next handler in the
 * chain and provides two methods: SetNext and Handle. The SetNext method is
 * used to set the next handler in the chain. The Handle method is used to
 * process the request. If the request cannot be processed by the current
 * handler, it is passed to the next handler in the chain.
 */
class BaseHandler
{
protected:
    /**
     * @brief Pointer to the next handler in the chain.
     */
    std::shared_ptr<BaseHandler> next;
public:

    /**
     * @brief Set the next handler in the chain.
     * @param handler The next handler in the chain.
     */
    void SetNext(std::shared_ptr<BaseHandler> handler) 
    {
        next = handler;
    }

    /**
     * @brief Process the request.
     * @param password The request to be processed.
     * @return True if the request was processed, false otherwise.
     */
    virtual bool Handle(const Password &password) 
    {
        if (next) {
            return next->Handle(password);
        }
        return true;
    }
};
