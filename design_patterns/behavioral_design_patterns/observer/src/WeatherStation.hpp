#pragma once

#include <vector>
#include "Subscriber.hpp"


/**
 * @class WeatherStation
 * @brief A class that represents a weather station in the Observer pattern.
 *
 * This class is the subject in the Observer pattern. It is responsible for
 * managing the list of subscribers and notifying them when the weather
 * forecast is updated.
 */
class WeatherStation
{
private:
    /**
     * @brief Vector of subscriber objects.
     *
     * This vector stores all the subscriber objects that are subscribed to
     * the weather station.
     */
    std::vector<Subscriber*> subscribers;

public:
    /**
     * @brief Constructor for the WeatherStation class.
     *
     * This constructor initializes the vector of subscriber objects.
     */
    WeatherStation() 
    {
        subscribers = std::vector<Subscriber*>();
    }

    /**
     * @brief Method to subscribe a subscriber to the weather station.
     *
     * This method adds a subscriber to the vector of subscriber objects.
     * @param subscriber The subscriber object to be subscribed.
     */
    void Subscribe(Subscriber* subscriber)
    {
        subscribers.push_back(subscriber);
    }

    /**
     * @brief Method to unsubscribe a subscriber from the weather station.
     *
     * This method removes a subscriber from the vector of subscriber objects.
     * @param subscriber The subscriber object to be unsubscribed.
     */
    void Unsubscribe(Subscriber* subscriber)
    {
        for (auto iterator = subscribers.begin(); iterator != subscribers.end(); iterator++) {
            if (*iterator == subscriber) {
                subscribers.erase(iterator);
                break;
            }
        }
    }

    /**
     * @brief Method to notify all subscribers when the weather forecast is updated.
     *
     * This method iterates over the vector of subscriber objects and calls the
     * update method of each subscriber with the updated weather forecast.
     * @param message The updated weather forecast.
     */
    void Notify(const std::string& message) 
    {
        for (auto subscriber : subscribers) 
        {
            subscriber->Update(message);
        }
    }
};
