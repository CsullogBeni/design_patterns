#include "RemoteControl.hpp"
#include "TurnOnHeatingCommand.hpp"
#include "TurnOffHeatingCommand.hpp"
#include "TurnOnLightsCommand.hpp"
#include "TurnOffLightsCommand.hpp"
#include "Heater.hpp"
#include "Lights.hpp"

int main()
{
    Lights* lights = new Lights();
    Heater* heater = new Heater();
    
    TurnOnLightsCommand* turnOnLightsCommand = new TurnOnLightsCommand(lights, 80);
    TurnOffLightsCommand* turnOffLightsCommand = new TurnOffLightsCommand(lights);
    TurnOnHeatingCommand* turnOnHeatingCommand = new TurnOnHeatingCommand(heater, 23);
    TurnOffHeatingCommand* turnOffHeatingCommand = new TurnOffHeatingCommand(heater);

    RemoteControl* remoteControl = new RemoteControl(turnOnLightsCommand);
    remoteControl->ExecuteCommand();
    remoteControl->SetCommand(turnOffLightsCommand);
    remoteControl->ExecuteCommand();
    remoteControl->SetCommand(turnOnHeatingCommand);
    remoteControl->ExecuteCommand();
    remoteControl->SetCommand(turnOffHeatingCommand);
    remoteControl->ExecuteCommand();

    delete remoteControl;
    delete turnOnLightsCommand;
    delete turnOffLightsCommand;
    delete turnOnHeatingCommand;
    delete turnOffHeatingCommand;
    delete lights;
    delete heater;

    return 0;
}