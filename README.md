# Final Project
By: Michael Farrell
![](example_vid.gif)

## Project Description
For my final project I want to simulate a ground robot driving around a
labyrinth/maze. I want to simulate a Lidar (laser scanner) on the ground robot
and have the ground robot map out its surroundings while the user drives it
around.  This would require the robot to perfectly know its pose in the world.
However, if I have time, I want to extend this to SLAM (Simultaneous
Localization And Mapping) so that the robot has to estimate its location in the
environment at the same time it maps the environment.

The dynamics of the ground robot will be simulated to mimic real motion of a
TurtleBot. The commands given by the user (keyboard or Xbox controller) will be
velocity commands (forward/backward and rotation) that the robot tries to
achieve with a basic PID controller and first order motor dynamics.

Robot dynamics, kinematics and control based on "Control of Unicycle Type
Robots" by R. Carona, et. al.
[pdf](http://vislab.isr.ist.utl.pt/publications/08-jetc-rcarona-vcontrol.pdf)

## Sprint #1
Planned Stories:
- As a user I want to see a robot model (.stl) displayed on the screen.
- As a user I want to move the robot on the screen with my keyboard.
- As a user I want to see the robot move on a floor texture.
- As a user I want to give desired velocity commands to the robot from my
keyboard.
- As a useer I want the camera to rotate with the robot I am controlling.

## Sprint #2
Planned Stories:
- As a user I want to see the robot's lidar sensor outputs in a separate window.

