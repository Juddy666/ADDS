#include "function-4-1.h"

 BusCounter::BusCounter(int Cap){
    capacity =Cap;
    bus_count =0;
}

void BusCounter::passenger_board(){
    bus_count++;
}

void BusCounter::passenger_exit(){
    bus_count--;
}

int BusCounter::get_count(){
    return bus_count;
}