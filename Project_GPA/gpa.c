#include "gpa.h"
#include <string.h>

float score(char *grade){
    if (!strcmp(grade, "A+")){
        return 4.3;
    }
    else if (!strcmp(grade, "A")){
        return 4.0;
    }
    else if (!strcmp(grade, "A-")){
        return 3.7;
    }
    else if (!strcmp(grade, "B+")){
        return 3.3;
    }
    else if (!strcmp(grade, "B")){
        return 3.0;
    }
    else if (!strcmp(grade, "B-")){
        return 2.7;
    }
    else if (!strcmp(grade, "C+")){
        return 2.3;
    }
    else if (!strcmp(grade, "C")){
        return 2.0;
    }
    else if (!strcmp(grade, "C-")){
        return 1.7;
    }
    else{
        return 0;
    }
}

void gpa(char *grade, int credit, float *result){
    static int total_credit = 0;
    float origin = (*result) * total_credit;
    total_credit += credit;
    float grade_score = score(grade);
    *result = ((grade_score * credit) + origin) / total_credit;
}
