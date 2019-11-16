# Drone Receiver 

## Description
For the telemetry system prototype, we can use an arduino to emulate a drone transiever module. We would like to provide serial data via USB using the UART peripheral of the arduino, the program will send a string of random data which is used to represent the information that is read from the engine sensors. Data sent which is fed will be in CSV format, this data is read using our pit telemetry viewer designed in processing.