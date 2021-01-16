#include <iostream>
#include "Date.h"

using namespace std; 

int main() {
    Date today, yesterday;

    init(today, 2014, 12, 25);
    print(today);

    init(yesterday, 2014, 12, 24);
    print(yesterday);

    add_y(today, 1);
    add_y(today, 1);
    add_y(today, 1);
    print(today);




	return 0;
}