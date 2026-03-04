#include "static_var.h"

int update_total(int amount){
    static int total = 0;

    total = total + amount;
    return total;
}