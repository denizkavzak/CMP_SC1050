#include "static_variable_example.h"

static int get_update();

int main(){

    printf("Total value: %d\n", update_total(0));
    printf("Using static get function: %d\n", get_update());

    printf("Total value: %d\n", update_total(50));
    printf("Using static get function: %d\n", get_update());
    
    printf("Total value: %d\n", update_total(50));
    printf("Using static get function: %d\n", get_update());
    
    printf("Total value: %d\n", update_total(75));
    printf("Using static get function: %d\n", get_update());
}

static int get_update() {
    return update_total(0);
}