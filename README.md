# ATMEGA328P-Digital-Clock
This is a repository that contains the framework (source code, executables and schematics) for a digital clock for devices with less than 32kb of flash memory such as the ATMEGA328P microcontroller.

By connecting the microcontroller to a 7 segment clock display and adding a buzzer the following code written in C allows to set a digital clock with an integrated alarm.

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
The electrical system was installed on a small case that was wrapped with a wodeen vinyl and added a charging port and 3 set of buttons to allow us to have a fully functional clock
![image](https://user-images.githubusercontent.com/54071118/224152350-619f8c39-30bd-4dc9-9587-88467a695c7c.png)

![image](https://user-images.githubusercontent.com/54071118/224153625-8295aeb0-8cc0-4441-9e7e-26d67ccfcfde.png)

![image](https://user-images.githubusercontent.com/54071118/224153680-1d65eeb5-1ffc-47ea-98f1-050e1e412d94.png)


# Setup
Load the code to the microcontroller using a ATAVRISP2-ND and [AVRDUDE](https://www.nongnu.org/avrdude/)

# Next steps
Update the library with the Assembly code to improve performance
