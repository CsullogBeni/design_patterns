#pragma once

#include "Subscriber.hpp"


/**
 * @class WeatherAppSubscriber
 * @brief A class that represents a subscriber to the WeatherPublisher class.
 *
 * This class is a concrete subscriber class that implements the Subscriber interface.
 * It is used by the WeatherPublisher class to notify subscribers when the weather
 * forecast is updated.
 */
class WeatherAppSubscriber : public Subscriber
{
public:
    /**
     * @brief A method that updates the subscriber with the latest weather forecast.
     *
     * This method is used by the WeatherPublisher class to notify subscribers when
     * the weather forecast is updated. It takes a string parameter that contains the
     * latest weather forecast.
     *
     * @param message A string containing the latest weather forecast.
     */
    void Update(const std::string& message) override
    {
        std::cout << "Weather App: " << message << std::endl;
    };
};
