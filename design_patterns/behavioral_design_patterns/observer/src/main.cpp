#include <iostream>

#include "WeatherStation.hpp"
#include "NewsAppSubscriber.hpp"
#include "WeatherAppSubscriber.hpp"


int main() {
    WeatherStation weather_station;

    NewsAppSubscriber news_app_subscriber;
    WeatherAppSubscriber weather_app_subscriber;

    weather_station.Subscribe(&news_app_subscriber);
    weather_station.Subscribe(&weather_app_subscriber);

    weather_station.Notify("Sunny day today!");

    weather_station.Unsubscribe(&news_app_subscriber);

    weather_station.Notify("Rainy day today!");

    

    return 0;
}
