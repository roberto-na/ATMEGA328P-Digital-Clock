# ATMEGA328P-Digital-Clock
The project aims to create a digital clock using ATMEGA328P microcontroller. The microcontroller is programmed to drive a 7-segment display and a piezo buzzer for the alarm function.

The microcontroller receives input from a real-time clock (RTC) module and uses it to drive the display in real-time. The RTC module is responsible for keeping track of the current time and date.

The clock is displayed on a 4-digit 7-segment display with each digit representing hours, minutes, and seconds. The display is driven using a common cathode connection to the microcontroller.

The piezo buzzer is connected to the microcontroller and is used to signal the alarm function. The alarm function can be set through buttons connected to the microcontroller. The user can set the alarm time and enable/disable the alarm.

The project is powered using a 9V battery or an AC adapter. The microcontroller is programmed using the Arduino IDE and is configured to run on the internal clock of 8 MHz.

The clock design can be customized to include additional features such as temperature and humidity sensors, automatic time synchronization, and Bluetooth connectivity.

Overall, this project provides a simple and low-cost solution for a digital clock with an integrated alarm function that can be used in homes, offices, and other places where an accurate and reliable clock is needed.

| ![image](https://user-images.githubusercontent.com/54071118/224153976-b70c764b-ce43-4973-804a-bf02dffc07dc.png) |
|:--:| 
| *7 segment display* |

| ![image](https://user-images.githubusercontent.com/54071118/224154102-8bee14a1-ef93-4989-b4ff-7e597f5570c5.png) |
|:--:| 
| *Circuit board used to install the microcontroller and aux* |

| ![image](https://user-images.githubusercontent.com/54071118/224150127-d6701800-7788-4496-9edd-2793ccd38759.png) | 
|:--:| 
| *Schematic configuration using an ATMEGA328P* |

# Final Product
We took the project a step further by enclosing the electrical system in a case and adding additional features.

The electrical system is enclosed in a small case that has been wrapped in a wooden vinyl material to give it a natural and warm look. The case measures approximately 10 cm x 10 cm x 3 cm and has a compact and portable design that makes it easy to carry and use in different locations.

The front panel of the case features a 4-digit 7-segment display that shows the current time in hours, minutes, and seconds. The display is bright and clear, making it easy to read even in low-light conditions.

Below the display, there are three sets of buttons that allow the user to interact with the clock and set the time, date, and alarm. The buttons are responsive and easy to use, and provide a tactile feedback when pressed.

On the side of the case, there is a charging port that allows the clock to be powered using a USB cable. This makes it convenient to charge the clock using a computer or a USB adapter.

![image](https://user-images.githubusercontent.com/54071118/224152350-619f8c39-30bd-4dc9-9587-88467a695c7c.png)

![image](https://user-images.githubusercontent.com/54071118/224153625-8295aeb0-8cc0-4441-9e7e-26d67ccfcfde.png)

![image](https://user-images.githubusercontent.com/54071118/224153680-1d65eeb5-1ffc-47ea-98f1-050e1e412d94.png)


# Setup
Load the code to the microcontroller using a ATAVRISP2-ND and [AVRDUDE](https://www.nongnu.org/avrdude/)

# Next steps
Update the library with the Assembly code to improve performance
