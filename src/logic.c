#include <logic.h>

int add(int nu1,int nu2){
    return (nu1 + nu2);
}

int substract(int nu1,int nu2){
    return (nu1 - nu2);
}

int multiply(int nu1,int nu2){
    return (nu1 * nu2);
}

double divide(int nu1,int nu2){
    if(nu2!=0){
        return (nu1 / nu2);   
    }
    return 0;
}
