#pragma once


/**
 * @class Iterator
 * @brief An interface for all iterators
 *
 * This interface is used for all iterators. It contains two pure virtual
 * methods: HasNext and Next. The HasNext method is used to check if there
 * are more elements to iterate over. The Next method is used to get the
 * next element in the iteration.
 */
template <typename T>
class Iterator
{
public:

    /**
     * @brief Check if there are more elements to iterate over
     *
     * This method is used to check if there are more elements to iterate over.
     * @return True if there are more elements, false otherwise
     */
    virtual bool HasNext() = 0;

    /**
     * @brief Get the next element in the iteration
     *
     * This method is used to get the next element in the iteration.
     * @return The next element in the iteration
     */
    virtual T Next() = 0;
};
