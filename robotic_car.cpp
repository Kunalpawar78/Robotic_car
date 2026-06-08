#include <wiringPi.h>
#include <iostream>

#define IN1 0   // GPIO17
#define IN2 1   // GPIO18
#define IN3 3   // GPIO22
#define IN4 4   // GPIO23

void forward()
{
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);

    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
}

void backward()
{
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);

    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
}

void left()
{
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);

    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
}

void right()
{
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);

    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
}

void stopMotor()
{
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);

    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
}

int main()
{
    wiringPiSetup();

    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    char command;

    std::cout << "Voice Controlled Robotic Car Started\n";

    while(true)
    {
        std::cin >> command;

        switch(command)
        {
            case 'F':
                forward();
                std::cout << "Moving Forward\n";
                break;

            case 'B':
                backward();
                std::cout << "Moving Backward\n";
                break;

            case 'L':
                left();
                std::cout << "Turning Left\n";
                break;

            case 'R':
                right();
                std::cout << "Turning Right\n";
                break;

            case 'S':
                stopMotor();
                std::cout << "Stopped\n";
                break;

            default:
                std::cout << "Invalid Command\n";
        }
    }

    return 0;
}