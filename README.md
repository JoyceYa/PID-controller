## Project Introduction
This project implemented a PID controller for the vehicle control in a virtual environment in C++. 

## PID controller hyperparameters

This hyperparameters of the PID was chosen by manual debugging. The proportinal component was first chosen to give the car a smooth start, but after a short distance, the car started to swing. Therefore, the differential component was added and debugged. Very small integral component seemed to influence the performance a lot, so it was set to a very small value.

The final values set to the hyperparameters of P, I, D are 0.23, 0.002, and 2.5 respectively.

## Basic Build Instructions

1. mkdir build
2. cd build
3. cmake ..
4. make
5. ./pid

