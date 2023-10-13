#include <glib.h>
/*
Definição inicial da struct com a info de uma reserva; 
*/
struct reservation {
    char* id;
    char* user_id;
    char* hotel_id;
    char* hotel_name; 
    char* hotel_stars;
    char* city_tax;
    char* address;
    GDateTime* begin_date;
    GDateTime* end_date; 
    char* price_per_night;
    bool* includes_breakfast; //confirmar utilidade de usar bool 
    char* room_details;
    char* rating;
    char* comment;
};
//não esquecer dar free das structs de datas

