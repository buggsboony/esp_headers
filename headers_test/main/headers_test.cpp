#include <stdio.h>
#include <iostream>
using namespace std; 
#include "esp_h/esp_console.h"
#include "esp_h/esp_iotools.h"
#include "esp_h/esp_maths.h"



#include "esp_h/esp_memo.h"

extern "C" void app_main(void)
{
        println("Hello ESP White text");

        printCoolLn("Hello ESP green text");

        printErrLn("Hello ESP red text");
}
