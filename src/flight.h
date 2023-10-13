#include <glib.h>

/*
Definição inicial da struct com a info de um voo; 
*/
struct flight {        
    char* id;
    char* airline;
    char* plane_model;
    char* total_seats; 
    char* origin;
    char* destination;
    GDateTime* schedule_departure_date;
    GDateTime* schedule_arrival_date; 
    GDateTime* real_departure_date;
    GDateTime* real_arrival_date;
    char* pilot;
    char* copilot;
    char* notes;
};
//não esquecer dar free das structs de datas


