## INTRODUCTION

The modern trends in automobile industry have paved a way for drastic increase in the use of vehicles . Most of the traditional systems use winshield wiper which works intermittently and variable speeds. Usually most of the  vehicles have adjustable lever near the steering to control the wiper speed. Most car wipers have DC motors 
to control the wipers. Here I have designed a wiper control system using STM32F4XX discovery board. Since the STM32F4xx discovery board doesnot have wipers thus we consider the LEDs as the wiper blade position for this application . There are 4 LEDs red , green, orange and blue . Whenever push button is pressed and held for 2secs the  Red LED is ON . On giving user input the LEDs will start blinking simultaneously. The speed of the wipers change with alternate key press . The speed changes for 3 levels. On the 4th pressthe wiper action stops . The Red LED is OFF if the user button is pressed and held for 2 secs.


## RESEARCH

The souce code is to be compiled using STM Cube IDE compiler. The wiper control system in embedded C is not designed to be compiled on Tuurbo C versions.

## OBJECTIVE

The main objective of this project is to get an wiper control system using STM32xx discovery board . The objective of an wiper system is to clean the front screen of the car to provide a clear vision to the driver . 

## COMPONENTS REQUIRED
STM32 Discovery board , LED (RED, ORANGE, GREEN, BLUE) as wiper blade 

# 4'W and 1'H

## WHAT

 Wiper control system has high reliability.

## WHERE 

Window wipers are also known as wiper blades or winshield wipers  , are attached to moveable arms on the winshield arm.

## WHEN

Winshield wiper or wiper blade is a device used to remove rain, snow, ice, washer fluid, water, and or debris from vehicles front screen.

## WHY

The main purpose of the wiper control system is to clean the windscreen sufficiently to provide clear visibility to the driver.

## HOW

They can be operated by electric motors.

## APPLICATIONS

They are used in automobiles such as Cars , trucks , trains , locomotives and etc to wipe the dust , water and washer fluid on the winshield of the vehicle.

# SWOT(STRENGTH,  WEAKNESS , OPPORTUNITY, THREATS)

## STRENGTH

Car wiper are the important safety component.
They play very crucial role in the safety of driver and the passengers the vehicle thus, it must be given as much as importance as to any other  part of car. It cleans the windshield and helps to see clearly during dust storms and heavy rainfall.
It can be operayed manually or automatically using the PUSH buttons or key.

## WEAKNESS

This system can only be used during  rain, and dust on the glass. The cost of the system increases with the increase in the components such as rain sensor . In order to avoid false detection of rain , it requires rain sensors to take decision after few minutes.

## OPPORTUNITY

The wiper system is designed to clean the wind screen sufficiently to provide adequate visibility to the driver.

## THREATS

During rain wiper blend could be a problem.

# HIGH LEVEL REQUIREMENTS

| ID | Description | Category |
| --- | --- | --- | 
| HLR01 | Lock and Unlock of car | Technical |
| HLR02 | On the wipers  | Technical |
| HLR03 | Control the speed of the wipers by the user |Technical|
| HLR04 | Switching Off the wipers and bringing it back to same position  |Technical|

# LOW LEVEL REQUIREMENTS

| ID | Description | Category |
| --- | --- | --- | 
| LLR01 | Power Supply(5V) | Hardware |
| LLR03 | LED | Hardware |
| LLR04 | STM CUBE IDE |Software|







