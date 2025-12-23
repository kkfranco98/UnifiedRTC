#pragma once

#include <Arduino.h>

inline String normalize_date(const uint16_t &year,
                             const uint16_t &month,
                             const uint16_t &day,
                             const uint16_t &hour,
                             const uint16_t &minute,
                             const uint16_t &second,
                             const uint16_t &millisecond)
{
    // Validation
    if (!(year >= 1970 && year <= 9999 &&
          month <= 12 &&
          day <= 31 &&
          hour <= 23 &&
          minute <= 59 &&
          second <= 59 &&
          millisecond <= 999))
    {
        return "INVALID_DATE";
    }

    // Format:
    // YYYY-MM-DD+HH-MM-SS+mmm
    // Max length: 4+1+2+1+2+1+2+1+2+1+2+1+3 = 24 + '\0'
    char buffer[25];

    snprintf(buffer, sizeof(buffer),
             "%04u-%02u-%02u+%02u-%02u-%02u+%03u",
             (unsigned)year,
             (unsigned)month,
             (unsigned)day,
             (unsigned)hour,
             (unsigned)minute,
             (unsigned)second,
             (unsigned)millisecond);

    return String(buffer);
}