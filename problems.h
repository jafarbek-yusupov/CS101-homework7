#include <cmath>

void days2years(int &days,int &years) {
    years = days / 365;
    days = days % 365;
}

double func(double *x,double *y) {
    *y = (11*pow(*x, 3))/3 + 5;
    return *y;
}

int minsNewYear(int *hour, int *min) {
    return 60*(24-(*hour))-(*min);
}

double probability(int *y,int *w) {
    int cnt = 0;
    for (int i = 1; i <= 6; i++){
        cnt += (i> *y && i> *w || i==*y || i==*w ? 1 : 0);
    }
    return double(cnt)/6;
}

int presses(int *x) {
    int dgt = *x % 10, n = 0;
    for (int i = 1; i<=dgt; i++){
        for (int j = 1; j <= (i == dgt ? to_string(*x).length() : 4); j++){ 
            n += j;
        }
    }
    return n;
}
