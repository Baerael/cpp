#include <iostream>
#include "Date.h"

using namespace std;

void init (Date & date, int yyyy, int mm, int dd) {
    date.yyyy_ = yyyy;
    date.mm_ = mm;
    date.dd_ = dd;
}

void print (const Date & date) {
    cout << date.yyyy_ << '/'
         << date.mm_ << '/'
         << date.dd_ << '\n';
}

void add_y(Date & d, int i) { d.yyyy_ += i; }
void add_m(Date & d, int i) { d.mm_   += i; }
void add_d(Date & d, int i) { d.dd_   += i; }

void sub_y(Date & d, int i) { d.yyyy_ -= i; }
void sub_m(Date & d, int i) { d.mm_   -= i; }
void sub_d(Date & d, int i) { d.dd_   -= i; }