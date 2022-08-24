#ifndef FUNCTION_4_1_H
#define FUNCTION_4_1_H

class BusCounter{
public:
  int bus_count; // current count of people in the bus
  int capacity; // maximum capacity of the bus

  BusCounter(int cap); // initialises capacity to cap and bus_count to zero
  void passenger_board();  // person tries to board the bus increments bus_count by one if bus_count < capacity
  void passenger_exit();   // person exits bus - decrements bus_count by one if bus has more than zero people.
  int get_count(); // returns the current count of people in the bus. 
};
#endif