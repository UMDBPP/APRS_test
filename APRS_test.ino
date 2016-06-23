#include "Arduino.h"

String test_string =
        "W3EAX-12>APRS,N3KTX-4*,WIDE1*,WIDE2-1,qAR,W4TTU:!/:IgX:iOnO   /A=000633|!#|  /W3EAX,19,8,16'C,http://www.umd.edu"

void setup()
{
}

void loop()
{
    Serial.println(test_string);
    delay(250);
}
