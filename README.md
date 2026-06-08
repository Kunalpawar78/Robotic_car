# Wireless Voice-Controlled Robotic Car

## Project Overview

The Wireless Voice-Controlled Robotic Car is a Raspberry Pi-based robotics project that enables a vehicle to move according to voice commands received wirelessly through Bluetooth communication. The system uses a Raspberry Pi as the main controller, an L293D motor driver for motor control, and DC motors for vehicle movement.

This project demonstrates the integration of embedded systems, wireless communication, and robotics to achieve hands-free navigation.

## Features

* Voice-controlled navigation
* Wireless Bluetooth communication
* Forward, Backward, Left, Right, and Stop movements
* Raspberry Pi GPIO control
* Real-time motor operation using L293D motor driver
* Simple and cost-effective robotic solution

## Hardware Components

* Raspberry Pi
* Bluetooth Module (HC-05/HC-06)
* L293D Motor Driver IC
* DC Motors
* Robotic Car Chassis
* Battery Pack
* Connecting Wires

## Software Requirements

* C++
* Raspberry Pi OS
* GPIO Libraries (e.g., WiringPi)

## System Architecture

Voice Command (Mobile App)
↓
Bluetooth Module
↓
Raspberry Pi
↓
L293D Motor Driver
↓
DC Motors
↓
Robotic Car Movement

## Commands

| Command | Action        |
| ------- | ------------- |
| F       | Move Forward  |
| B       | Move Backward |
| L       | Turn Left     |
| R       | Turn Right    |
| S       | Stop          |

## How It Works

1. The user gives a voice command through a smartphone application.
2. The command is transmitted via Bluetooth.
3. Raspberry Pi receives and processes the command.
4. GPIO pins control the L293D motor driver.
5. The motor driver powers the DC motors.
6. The robotic car moves according to the received command.

## Applications

* Robotics Education
* Home Automation Research
* Assistive Technology
* Wireless Vehicle Control Systems
* Embedded Systems Learning

## Future Enhancements

* Obstacle Detection using Ultrasonic Sensors
* Camera Integration for Live Streaming
* Wi-Fi Based Remote Control
* Autonomous Navigation
* Mobile Application Enhancement

## Author

Kunal Pawar
