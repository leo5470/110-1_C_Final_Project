#include <stdbool.h>
#include <string.h>
#include "judge.h"

bool success(char array[3][3], char* winner){
    char temp_y[3], temp_x[3];
    char inclined_topleft[3] ,inclined_bottomleft[3];
    int i, j;
    for(i = 0; i < 3; ++i){
        for(j = 0; j < 3; ++j){
            temp_y[j] = array[i][j];
            temp_x[j] = array[j][i];
        }
        if(temp_y[0] == temp_y[1] && temp_y[1] == temp_y[2]
           && strcmp(temp_y, "\0")){
            *winner = temp_y[0];
            return true;
        }
        if(temp_x[0] == temp_x[1] && temp_x[1] == temp_x[2]
           && strcmp(temp_x, "\0")){
            *winner = temp_x[0];
            return true;
        }
    }
    for(i = 0, j = 0; i < 3; ++i, ++j){
        inclined_topleft[i] = array[i][j];
    }
    if(inclined_topleft[0] == inclined_topleft[1] 
       && inclined_topleft[1] == inclined_topleft[2]
       && strcmp(inclined_topleft, "\0")){
        *winner = inclined_topleft[0];
        return true;
    }
    for(i = 2, j = 0; i >= 0; --i, ++j){
        inclined_bottomleft[j] = array[i][j];
    }
    if(inclined_bottomleft[0] == inclined_bottomleft[1] 
       && inclined_bottomleft[1] == inclined_bottomleft[2]
       && strcmp(inclined_bottomleft, "\0")){
        *winner = inclined_bottomleft[0];
        return true;
    }
    else{
        return false;
    }
}
