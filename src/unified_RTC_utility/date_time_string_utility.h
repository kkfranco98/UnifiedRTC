#pragma once

#include <Arduino.h>

inline const String normalize_date(const uint16_t &year, const uint16_t &month, const uint16_t &day,
                                   const uint16_t &hour, const uint16_t &minute, const uint16_t &second,
                                   const uint16_t &millisecond)

{
    String date = "";

    if (year >= 1970 and year <= 9999 and month <= 12 and day <= 31 and
        hour <= 23 and minute <= 59 and second <= 59 and
        millisecond <= 999)
    {
        date += String(year) + "-";

        month < 10 ? date += "0" + String(month) : date += String(month);
        date += "-";

        day < 10 ? date += "0" + String(day) : date += String(day);
        date += "+";

        hour < 10 ? date += "0" + String(hour) : date += String(hour);
        date += "-";

        minute < 10 ? date += "0" + String(minute) : date += String(minute);
        date += "-";

        second < 10 ? date += "0" + String(second) : date += String(second);
        date += "+";

        millisecond < 100 ? (millisecond < 10 ? date += "00" + String(millisecond) : date += "0" + String(millisecond)) : date += String(millisecond);
    }
    else
    {
        date = "INVALID_DATE";
    }

    return date;
}
