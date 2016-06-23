#include "Arduino.h"

String test_strings[] =
        {
                "W3EAX-9>APRS,N3KTX-4*,WIDE1*,WIDE2-1,qAR,W4TTU:!/:IgL:iOrO   /A=000541|!#|  /W3EAX,18,8,15'C,http://www.umd.edu",
                "W3EAX-9>APRS,N3KTX-4*,WIDE1*,WIDE2-1,qAR,W4TTU:!/:Ig`:iOhO   /A=000557|!$|  /W3EAX,23,8,16'C,http://www.umd.edu",
                "W3EAX-9>APRS,N3KTX-4*,WIDE1*,WIDE2*,qAR,N3ENM-10:!/:Ig`:iOhO   /A=000557|!$|  /W3EAX,23,8,16'C,http://www.umd.edu",
                "W3EAX-9>APRS,N3KTX-4*,WIDE1*,WIDE2-1,qAR,W4TTU:!/:IgV:iOhO   /A=000613|!'|  /W3EAX,39,8,19'C,http://www.umd.edu" };

int num_strings = 4;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    for (int index = 0; index < num_strings; index++)
    {
        Serial.println(test_strings[index]);
        delay(250);
    }
}
