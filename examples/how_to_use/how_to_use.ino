#include <Arduino.h>
#include <UnifiedRTC.h>

/*
===============================================================================
 UnifiedRTC - Basic usage example
===============================================================================

This example shows how to use UnifiedRTC through the common RTC_Interface,
independently of the underlying RTC backend.

The application code depends ONLY on RTC_Interface.
The concrete RTC implementation can be replaced without changing the logic
(e.g. ESP32 internal RTC, external RTC chips, etc.).

-------------------------------------------------------------------------------
! Compile-time UNIX timestamp
-------------------------------------------------------------------------------
In this example, the RTC is initialized using the firmware build time.
This is done by defining the COMPILE_UNIX_TIME macro at build time.

? If you are using PlatformIO, add the following to your platformio.ini:

    build_flags =
        -D COMPILE_UNIX_TIME=$UNIX_TIME

PlatformIO will automatically expand $UNIX_TIME to the current UNIX timestamp
when compiling the firmware.
*/

#ifndef COMPILE_UNIX_TIME
#define COMPILE_UNIX_TIME 0 //<-- Set this to the current UNIX timestamp
#endif

// -----------------------------------------------------------------------------
// Use RTC_Interface if needed, in this case you need a pointer
// -----------------------------------------------------------------------------
UnifiedRTC::RTC_Interface *rtc = nullptr;

// -----------------------------------------------------------------------------
//! Or use directly a concrete RTC and Select the RTC backend
// -----------------------------------------------------------------------------
//? Example backend: ESP32 internal RTC, but you can replace ESP32_RTC with any other UnifiedRTC adapter without modifying the rest of the code

UnifiedRTC::ESP32_RTC esp32_rtc(COMPILE_UNIX_TIME);

void setup()
{
    Serial.begin(115200);
    delay(2000);

    rtc = &esp32_rtc;

    Serial.println();
    Serial.println("UnifiedRTC - basic usage example");
    Serial.println("--------------------------------");
}

void loop()
{
    Serial.print("Date & Time: ");
    Serial.println(rtc->get_date_time_in_yyyy_MM_dd_hh_mm_ss_ms());

    delay(2000);
}
